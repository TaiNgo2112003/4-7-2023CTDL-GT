
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
void permutation(int* x, int* y) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void heapify(int arr[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 

    if (l < n && arr[l] > arr[largest])
        largest = l;


    if (r < n && arr[r] > arr[largest])
        largest = r;


    if (largest != i)
    {
        permutation(&arr[i], &arr[largest]);


        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n)
{

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--)
    {
        permutation(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }
}
int main() {
    int na;
    int a[MAX];
    input(a, na);

    printf("Manng ban dau.");
    output(a, na);

    heapSort(a, na);

    printf("\nManng Sau Khi Sap Xep.");
    output(a, na);
}