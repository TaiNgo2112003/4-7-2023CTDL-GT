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
int Tich(int n) {
    if (n == 0) return 1;
    return n * Tich(n - 1);
}
int main() {
    int na;
    printf("Nhap n: ");
    scanf_s("%d", &na);
    printf("Giai Thua Cua N Là: %d", Tich(na));
   
}