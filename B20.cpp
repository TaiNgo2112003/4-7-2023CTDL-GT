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
void permutation(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}
void sort_with_recursive(int a[], int i, int n) {
    for (int j = n - 1; j > i; j--) {
        if (a[j] < a[i]) permutation(a[i], a[j]);
        if (i < n - 1)
            sort_with_recursive(a, i + 1, n);
    }
}
int main() {
    int na;
    int a[MAX];
    input(a, na);

    printf("Manng ban dau.");
    output(a, na);
    
    printf("Array after sorted with recursive: ");
    sort_with_recursive(a, 0, na);
    output(a, na);
}