#include <iostream>
using namespace std;

int main() {
	// Prepare Variabel
	int gol, jmlh_jam, gaji;
	
  // Input
	cout << "Masukkan golongan : ";
	cin >> gol;
	cout << "Masukkan jumlah jam kerja : ";
	cin >> jmlh_jam;
	
  // Process Output
	if (gol == 1) {
		gaji = 10000 * jmlh_jam;
		cout << "Total gaji adalah " << gaji;
	} else if (gol == 2) {
		gaji = 12500 * jmlh_jam;
		cout << "Total gaji adalah " << gaji;
	} else if (gol == 3) {
		gaji = 15000 * jmlh_jam;
		cout << "Total gaji adalah " << gaji;
	} else if (gol == 4) {
		gaji = 17500 * jmlh_jam;
		cout << "Total gaji adalah " << gaji;
	} else if (gol == 5) {
		gaji = 20000 * jmlh_jam;
		cout << "Total gaji adalah " << gaji;
	} else {
		cout << "error";
	}
	return 0;
}
