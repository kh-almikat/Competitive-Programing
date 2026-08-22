/*problem link: https://leetcode.com/problems/design-browser-history/description/ */


class Node {

public:
    string val;
    Node* next;
    Node* prev;

    Node(string val) {

        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node* current = NULL;

class BrowserHistory {
public:
    BrowserHistory(string homepage) { current = new Node(homepage); }

    void visit(string url) {

        Node* newnode = new Node(url);

        current->next = newnode;
        newnode->prev = current;

        current = current->next;
    }

    string back(int steps) {

        for (int i = 0; i < steps; i++) {
            if (current->prev != NULL) {
                current = current->prev;
            }
        }

        return current->val;
    }

    string forward(int steps) {

        for (int i = 0; i < steps; i++) {
            if (current->next != NULL) {
                current = current->next;
            }
        }

        return current->val;
    }
};