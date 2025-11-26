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
    tail = tail->next;
}

int find_idx(Node *head, int q)
{
    Node *temp = head;
    int i = 0;
    while (temp != NULL)
    {
        if(temp->val == q)
        {
            return i;
        }
        i++;
        temp = temp->next;
    }
    return -1;
}

// Function to free the memory (optional but good practice to avoid memory leaks)
void delete_list(Node* head) {
    Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        delete current;
        current = next;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
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
        int idx = find_idx(head, q);
        cout << idx << endl;
        delete_list(head);
    }

    return 0;
}