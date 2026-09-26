#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
    int val;
    Node* next;
    Node* prev;


    Node(int val){

        this->val = val;
        this->next = NULL;
        this->prev = NULL;

    }

};

class MyQueue{

    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val){

        sz++;
        Node* newnode = new Node(val);

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        

        
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;

    }


    void pop(){

        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }
        head->prev = NULL;


    }

    int front(){

        return head->val;
    }

    int back(){

        return tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){

        return head == NULL;

    }



};

class MyStack{

    public:
        
        Node* head = NULL;
        Node* tail = NULL;
        int s = 0;

        void push(int val){
            
            s++;
            Node* newnode = new Node(val);

            if (head == NULL)
            {
                head = newnode;
                tail = newnode;
                return;
            }
            


            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;

        }

        void pop(){
            s--;
            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;

            if (tail == NULL)
            {
                head = NULL;
                return;
            }

            tail->next = NULL;
        }

        int top(){

            return tail->val;
        }

        int size(){

            return s;
        }

        bool empty(){

            return head == NULL;

        }



};


int main()
{
    stack<int> s;
    MyQueue q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    if (s.size() != q.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!s.empty())
    {
        if (s.top() != q.front())
        {
            cout << "NO" << endl;
            return 0;
        }

        s.pop();
        q.pop();
    }

    cout << "YES" << endl;

    return 0;
}