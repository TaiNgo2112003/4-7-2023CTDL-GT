#include <iostream>
using namespace std;

int UCLN(int m, int n) {
	int r;
	if (m < n) return UCLN(n, m);
	r = m % n;
	if (r == 0) return n;
	else return UCLN(n, r);
}

int main() {
	int kq, m, n;
	cout << "Nhập m: ";
	cin >> m;
	cout << "Nhập n: ";
	cin >> n;
	kq = UCLN(m, n);
	cout << "Kết quả: " << kq;

}