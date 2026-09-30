#include <iostream>
using namespace std;

#define SIZE 10

struct Node {
    int data;
    int priority;
};

class PriorityQueue {
    Node arr[SIZE];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == SIZE;
    }

    void push(int value, int priority) {
        if (isFull()) {
            cout << "Queue is full!" << endl;
            return;
        }

        int i = size - 1;
        while (i >= 0 && arr[i].priority > priority) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1].data = value;
        arr[i + 1].priority = priority;
        size++;
    }

    int top() {
        return arr[0].data;
    }

    int topPriority() {
        return arr[0].priority;
    }

    void pop() {
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << "(" << arr[i].data << ", p:" << arr[i].priority << ") ";
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;
    pq.push(100, 3);
    pq.push(200, 1);
    pq.push(300, 2);
    pq.push(400, 5);

    cout << "Priority Queue :" << endl;
    pq.display();

    while (!pq.isEmpty()) {
        cout << "Top: " << pq.top() << " (priority " << pq.topPriority() << ")" << endl;
        pq.pop();
    }

    return 0;
}