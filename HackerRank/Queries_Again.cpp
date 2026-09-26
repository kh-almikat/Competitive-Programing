#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insert_at_position(Node *head, int idx, int val)
{
    Node *temp = head;

    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(val);

    newNode->next = temp->next;
    newNode->prev = temp;

    temp->next->prev = newNode;
    temp->next = newNode;
}

int size(Node *head)
{
    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

void print_forward(Node *head)
{
    cout << "L -> ";

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_reverse(Node *tail)
{
    cout << "R -> ";

    Node *temp = tail;

    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int idx, val;
        cin >> idx >> val;

        int sz = size(head);

        if (idx < 0 || idx > sz)
        {
            cout << "Invalid" << endl;
        }
        else if (idx == 0)
        {
            insert_at_head(head, tail, val);
            print_forward(head);
            print_reverse(tail);
        }
        else if (idx == sz)
        {
            insert_at_tail(head, tail, val);
            print_forward(head);
            print_reverse(tail);
        }
        else
        {
            insert_at_position(head, idx, val);
            print_forward(head);
            print_reverse(tail);
        }
    }

    return 0;
}