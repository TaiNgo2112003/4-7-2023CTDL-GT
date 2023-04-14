// bài 8 stack

#include <iostream>
using namespace std;

const int MAX_SIZE = 6; // kích thước của stack

int stack[MAX_SIZE]; 
int top = -1; 


bool kiemTraRong() {
    return (top == -1);
}


bool kiemTraDay() {
    return (top == MAX_SIZE - 1);
}


void them(int x) {
    if (kiemTraDay()) {
        cout << "Stack da day, khong the them phan tu.\n";
    }
    else {
        top++;
        stack[top] = x;
    }
}


int layTop() {
    if (kiemTraRong()) {
        cout << "Stack rong, khong the lay gia tri top.\n";
        return -1;
    }
    else {
        return stack[top];
    }
}


int layVaXoaTop() {
    if (kiemTraRong()) {
        cout << "Stack rong, khong the lay va xoa gia tri top.\n";
        return -1;
    }
    else {
        int x = stack[top];
        top--;
        return x;
    }
}


void inStack() {
    cout << "Cac phan tu trong stack la:\n";
    while (!kiemTraRong()) {
        cout << layVaXoaTop() << " ";
    }
    cout << endl;
}

int main() {
    // nh?p v�o stack 6 ph?n t?
    them(41);
    them(23);
    them(4);
    them(14);
    them(56);
    them(1);

    // xuất gtri top khi ra khỏi stack
    cout << "Gia tri top cua stack la: " << layTop() << endl;

    // in các pt trong stack còn lại
    inStack();

    return 0;
}