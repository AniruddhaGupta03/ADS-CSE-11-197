#include <iostream>
using namespace std;

const int SIZE = 5;

int stk[SIZE];
int top = -1;

bool isEmpty() {
    return top == -1;
}

// Check if stack is full
bool isFull() {
    return top == SIZE - 1;
}

// Push an element
void push(int item) {
    if (isFull()) {
        cout << "Stack Overflow!" << endl;
    } else {
        stk[++top] = item;
        cout << item << " pushed into stack." << endl;
    }
}

// Pop an element
void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << "Popped element: " << stk[top--] << endl;
    }
}

// Peek the top element
void peek() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Top element: " << stk[top] << endl;
    }
}

// Display all elements
void display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements are:" << endl;
    for (int i = top; i >= 0; i--) {
        cout << stk[i] << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    display();

    peek();

    pop();

    display();

    return 0;
}
