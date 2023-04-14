
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


void insertionSort(int a[], int n)
{
	int postion, tmp;
	for (int i = 1; i < n; i++) {
		tmp = a[i]; // cho a[i] vô tmp
		postion = i - 1;
		while (postion >= 0 && a[postion] > tmp)
		{
			a[postion + 1] = a[postion];
			postion--;
		}
		a[postion + 1] = tmp;
	}
}
int main() {
	int na;
	int a[MAX];
	input(a, na);

	printf("Manng ban dau.");
	output(a, na);

	insertionSort(a, na);

	printf("\nManng Sau Khi Sap Xep.");
	output(a, na);
}