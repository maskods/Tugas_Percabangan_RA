#include <iostream>
using namespace std;

int main() {
	// Membuat Variabel
	float a, b;
	
  // Input Nilai
	cout << "Masukkan nilai A : ";
	cin >> a;
	cout << "Masukkan nilai B : ";
	cin >> b;

  // Proses Output	
	if ( a > b) {
		cout << "Jadi nilai terbesar dari kedua bilangan tersebut ialah bilangan A = " << a;
	} else if (a < b) {
		cout << "Jadi nilai terbesar dari kedua bilangan tersebut ialah bilangan B = " << b;
	} else {
		cout << "Jadi kedua nilai bilangan tersebut ialah sama A = B yaitu " << a;

	}
	return 0;
}
