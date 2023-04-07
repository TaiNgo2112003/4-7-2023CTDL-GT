#include <iostream>
using namespace std;
int factorial(int n) {
	if (n == 0) return 1; 
	return n * factorial(n - 1);
}
int main() {
	int n;
	cout << "Nhập vào số giai thừa bạn muốn tính: ";
	cin >> n;
	int kq = factorial(n);
	cout << "\nKết quả \n" << n << "! = " << kq;
}