#include <iostream>
using namespace std;

int main() {
	// Prepare Variabel
	int jmlh_eksemplar, total_harga, harga, harga_total ;
	
  // Input
	cout << "Masukkan harga buku : ";
	cin >> harga;
	cout << "Masukkan jumlah yang dibeli : ";
	cin >> jmlh_eksemplar;
	
  // Proses
	if (jmlh_eksemplar >= 100) {
		total_harga = harga * jmlh_eksemplar;
		harga_total = total_harga - (harga * jmlh_eksemplar * 20 / 100);
		cout << "Total yang harus dibayar  adalah " << harga_total;
		
	} else if (jmlh_eksemplar >= 20) {
		total_harga = harga * jmlh_eksemplar;
		harga_total = total_harga - (harga * jmlh_eksemplar * 10 / 100);
		cout << "Total yang harus dibayar  adalah " << harga_total;
		
	} else {
		harga_total = harga * jmlh_eksemplar;
		cout << "Total yang harus dibayar  adalah " << harga_total;
	}
	return 0;
}
