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

void remove_duplicates(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        Node *temp1 = temp;

        while (temp1->next != NULL)
        {
            if (temp1->next->val == temp->val)
            {
                Node *deletenode = temp1->next;

                temp1->next = deletenode->next;

                delete deletenode;
            }
            else
            {

                temp1 = temp1->next;
            }
        }

        temp = temp->next;
    }
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

    remove_duplicates(head);

    print_linked_list(head);

    return 0;
}