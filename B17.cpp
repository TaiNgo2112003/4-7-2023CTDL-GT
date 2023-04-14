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
int Tong(int a[], int n) {
    if (n == 0) return 0; // đk dừng

    int total = Tong(a, n - 1);
    total+= a[n-1];
    return total;
}
int main() {
    int na;
    int a[MAX];
    input(a, na);

    printf("Manng ban dau.");
    output(a, na);
    printf("Tong Duong  La: %d", Tong(a, na));
}