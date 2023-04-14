#include <iostream>
#include < math.h>
#include <conio.h>
#define MAX 100

void input(int a[], int& n) {
    do {
        printf("\n Nhap so luong phan tu: ");;
        scanf_s("%d", &n);
        if (n <= 0 || n > MAX) {
            printf("Nhap Lai.");
        }
    } while (n <= 0 || n > MAX);
    for (int i = 0; i < n; i++) {
        printf("Nhap pt a[%d]: ", i + 1);
        scanf_s("%d", &a[i]);
    }
}

void output(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }
}
int Maximum(int a[], int n) {
    if (n == 0) return -1;
    
    else {
        if (a[n - 1] > Maximum(a, n - 1))
            return a[n - 1];     //check nếu lớn hơn giá trị max hiện tại thì permutation
        else
            return Maximum(a, n - 1);   //ko tiếp tục đi và giữ nguyên max ban đầu.
    }
}
int main() {
    int na;
    int a[MAX];
    input(a, na);

    printf("Manng ban dau.");
    output(a, na);
    printf("So Lon Nhat Trong Mang La: %d", Maximum(a, na));
}