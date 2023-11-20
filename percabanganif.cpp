#include <iostream>
using namespace std;

int main (){
	
	cout << "=== progam pembayaraan ===" << endl;
	unsigned int total_belanja;
	
	cout << "masukan total belanja: ";
	cin >> total_belanja;
	
	// menggunakan percabangan if
	if(total_belanja > 100000) {
		cout << "selamat! anda dapat hadiah" << endl;
	}
	
	cout << "terimahkasih sudah berbelanja di toko kami" << endl;
	
	return 0;
}
