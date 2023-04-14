
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
void InterchangeSort(int a[], int n) {

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[i]) permutation(&a[i], &a[j]);

	}
}
int main() {
	int na;
	int a[MAX];
	input(a, na);

	printf("Manng ban dau.");
	output(a, na);


	InterchangeSort(a, na);
	printf("\nManng Sau Khi Sap Xep.");
	output(a, na);
}