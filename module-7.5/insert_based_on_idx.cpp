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

void insert_at_any_pos(Node *&head, int idx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    if (idx == 0)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        for (int i = 0; i < idx - 1; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                return;
            }
        }

        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    int q;
    cin >> q;
    // cout << q;
    for (int i = 0; i < q; i++)
    {
        int idx, val1;
        cin >> idx >> val1;
        int size = linked_list_size(head);
        if (idx > size)
        {
            cout << "Invalid" << endl;
        }
        else
        {

            insert_at_any_pos(head, idx, val1);
            print_linked_list(head);
            cout << endl;
        }
    }
    return 0;
}