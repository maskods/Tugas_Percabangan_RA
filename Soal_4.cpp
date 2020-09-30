#include <iostream>
using namespace std;

int main() {
	// Prepare Variabel
	char index_mutu;
	
  // Input
	cout << "Masukkan nilai mutu : ";
	cin >> index_mutu;

	// Process
	if (index_mutu == 'A' or index_mutu == 'a') {
		cout << "Index nilai ialah 4";
	} else if (index_mutu == 'AB' or index_mutu == 'ab') {
		cout << "Index nilai ialah 3.5" ;
	} else if (index_mutu == 'B' or index_mutu == 'b') {
		cout << "Index nilai ialah 3";
	} else if (index_mutu == 'C' or index_mutu == 'c') {
		cout << "Index nilai ialah 2";
	} else if (index_mutu == 'D' or index_mutu == 'd') {
		cout << "Index nilai ialah 1";
	} else if (index_mutu == 'E' or index_mutu == 'e') {
		cout << "Index nilai ialah 0";
	} else {
		cout << "error";
	}
	return 0;
}
