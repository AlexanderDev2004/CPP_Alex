#include <iostream>
using namespace std;

int main () {
	
	string password;
	
	cout << "========= Login =========" << endl;
	cout << "Masukan password: ";
	cin >> password;
	
	// percabangan if/else
	if (password == "kopi") {
		cout << "selamat datang Bos!" << endl;
	} else {
		cout << "password salah, coba lagi ! " << endl;
	}
	
	cout << "terimah kasih sudah menggunakan aplikasi ini!" << endl;
	
	return 0;
}
