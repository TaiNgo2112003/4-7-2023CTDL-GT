
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

void quickSort(int a[], int l, int r) {
	int i, j, x;
	x = a[(l + r) / 2];
	i = l; j = r;
	do {
		while (a[i] < x)i++;
		while (a[j] > x)j--;
		if (i <= j)
		{
			permutation(&a[i], &a[j]);
			i++; j--;
		}
	} while (i < j);
	if (l < j) quickSort(a, l, j);
	if (i < r)quickSort(a, i, r);
}
int main() {
	int na;
	int a[MAX];
	input(a, na);

	printf("Manng ban dau.");
	output(a, na);

	quickSort(a, 0, na - 1);

	printf("\nManng Sau Khi Sap Xep.");
	output(a, na);
}