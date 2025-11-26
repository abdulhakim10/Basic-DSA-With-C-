#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}

bool find_same(Node* head, Node* head1)
{
    
    Node* temp = head;
    Node* temp1 = head1;

    while (temp != NULL && temp1 != NULL)
    {
        if(temp->val != temp1->val)
        {
            return false;
        }
        temp = temp->next;
        temp1 = temp1->next;
    }
    return (temp == NULL && temp1 == NULL);
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* head1 = NULL;
    Node* tail1 = NULL;

    // First Input
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    
    // Second Input
    int val1;
    while (true)
    {
        cin >> val1;
        if(val1 == -1)
        {
            break;
        }
        insert_at_tail(head1, tail1, val1);
    }
    
    // Compare Size
    if(find_same(head, head1))
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}