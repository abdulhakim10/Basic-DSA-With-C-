#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int linked_list_size(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_at_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return; 
    }

    Node *deletenode = head;
    head = head->next;

    if (head == NULL)
    {
        tail = NULL;
    }
    delete deletenode;
}

void delete_at_any_position(Node *&head, Node *&tail, int idx)
{

    if (head == NULL)
    {
        return; 
    }
    Node *temp = head;
    // Loop to find the node AT index (idx - 1)
    for (int i = 0; i < idx - 1; i++)
    {
        // Must check if the list is too short *before* moving to the next node
        if (temp == NULL || temp->next == NULL)
        {
            return; // Invalid index
        }
        temp = temp->next;
    }

    // temp is the node *before* the target node (at idx - 1)
    if (temp == NULL || temp->next == NULL)
        return; // Safety check

    Node *deletenode = temp->next;
    temp->next = deletenode->next;

    // Check if we deleted the tail node
    if (deletenode == tail)
    {
        tail = temp; // The new tail is the node before the deleted one
    }

    delete deletenode;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int X, V;
        if (!(cin >> X >> V))
            break;

        int size = linked_list_size(head);

        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            if (V == 0)
            {
                delete_at_head(head, tail);
            }
            else
            {
                delete_at_any_position(head, tail, V);
            }
        }

        print_linked_list(head);
        cout << endl;
    }
    return 0;
}