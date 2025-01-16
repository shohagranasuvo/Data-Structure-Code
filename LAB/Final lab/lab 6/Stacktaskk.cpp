#include <bits/stdc++.h>
using namespace std;

class Stack {
public:
    Stack* next = nullptr;
    int data;

    Stack() {} 

    Stack(int data) {
        this->next = nullptr;
        this->data = data;
    }

    bool isempty(Stack* head) {
        return head == nullptr;
    }

    void push(Stack*& head, int data) {
        Stack* newNode = new Stack(data);
        newNode->next = head;
        head = newNode;
    }

    void pop(Stack*& head) {
        if (isempty(head)) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Stack* temp = head;
        head = head->next;
        delete temp;
    }

    void display(Stack* head) {
        Stack* curr = head;
        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    Stack* head = nullptr;
    Stack s; 

    s.push(head, 30);
    s.push(head, 20);
    s.push(head, 40);
    s.push(head, 50);

    cout << "Stack elements: ";
    s.display(head);

    return 0;
}
