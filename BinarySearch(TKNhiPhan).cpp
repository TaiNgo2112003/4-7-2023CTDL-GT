
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
		printf("Nhap pt a[%d]: ", i+1);
		scanf_s("%d", &a[i]);
		}
}

void output(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
	}
}
int BinarySearch(int a[], int n, int x) {
	int left = 0; int right = n - 1; int midle;
	
	

	do{
		midle = (right + left) / 2;
		if (x == a[midle]) return midle;
		else {
			if (x < a[midle]) right = midle - 1;
			else left = midle + 1;
		}	
	} while (left <= right);
	return -1;
}
int main() {
	int na;
	int a[MAX];
	input(a, na);
	 
	printf("Manng ban dau.");
	output(a, na);
	int x;
	printf("\nNhap X can tim");
	scanf_s("%d", &x);
	printf_s("X O VI TRI THU: %d ", BinarySearch(a, na, x));


}