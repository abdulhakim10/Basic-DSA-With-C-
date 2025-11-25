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
    tail = tail->next;
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

int find_max(Node* head)
{
    if(head == NULL)
    {
        // If the list is empty, handle safely
        return INT_MIN;
    }
    int max_val = head->val;

    Node* temp = head;
    while(temp != NULL )
    {
        if(temp->val > max_val)
        {
            max_val = temp->val;
        }
        temp = temp->next;
    }
    return max_val;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    // print_linked_list(head);
    int max = find_max(head);
    cout << max << endl;
    
    return 0;
}