
#include <iostream>
#include < math.h>
#include <conio.h>
#define MAX 100

void intput(int a[], int& n)
{
	do {
		printf("\nintput so phan tu: ");
		scanf_s("%d", &n); if (n <= 0 || n > MAX)
		{
			printf("\n Nhap lai di ");
		}
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		printf("\n Nhap pt a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
}
void Output(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
	}
}
void permutation(int& a, int& b)
{
	int temp = a; a = b; b = temp;
}
//void quickSort(int a[], int left, int right)
//{
//	int l = left; int r = right;
//	int x = a[(left + right) / 2];
//
//
//	do {
//		while (a[l] < x) l++;
//		while (a[r] > x)r--;
//		if (a[l] > a[r]) {
//			permutation(a[l], a[r]);
//			l++;
//			r--;
//		}
//	} while (l < r);
//
//	if (left < r)
//		quickSort(a, left, r);
//	if (l < right)
//		quickSort(a, l, right);
//}
void quickSort(int a[], int left, int right) {
	int l, r;
	int x;
	x = (a[left + right / 2]);
	l = left; r = right;
	do {
		while (a[l] < x)l++;
		while (a[r] > x) r--;
		if (l <= r)// tức a[i] >a[j]
		{
			permutation(a[l], a[r]);
			l++;
			r--;
		}
	} while (l < r);
		if (left < r)
			quickSort(a, left, r);
		if(l<right)
			quickSort(a,l,right);

	
}
int main() {
	//int n, a[MAX];
	//intput(a, n);
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("before: ");
	Output(arr, n);

	quickSort(arr, 0, n - 1);
	Output(arr, n);

}