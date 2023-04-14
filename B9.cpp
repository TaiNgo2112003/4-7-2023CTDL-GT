// b�i 9
#include<iostream>
using namespace std;

const int MAX_SIZE = 100; //kích thước hàng đợi

class Queue {
private:
    int front; // chi so dau cua hàng đợi
    int rear; // chi so cuoi cua hàng đợi
    int arr[MAX_SIZE]; // mang chua hàng đợi
public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "H�ng doi day" << endl;
            return;
        }
        else if (isEmpty()) {
            front = 0;
            rear = 0;
        }
        else {
            rear++;
        }
        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "H�ng doi rong" << endl;
            return;
        }
        else if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "H�ng doi rong" << endl;
            return;
        }
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Queue q;
    int arr[] = { 41, 23, 4, 14, 56, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        q.enqueue(arr[i]);
    }
    q.enqueue(55);
    q.dequeue();
    q.display();
    return 0;
}