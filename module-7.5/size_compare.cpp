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

void print_linked_list(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}

int linked_list_size(Node* head)
{
    int count = 0;
    Node* temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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
    int size1 = linked_list_size(head);
    int size2 = linked_list_size(head1);

    // Compare Size
    if(size1 == size2)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}