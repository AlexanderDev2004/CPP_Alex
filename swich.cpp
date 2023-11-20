#include <iostream> 

using namespace std;

int main(){
	int pilihan;

	cout << "1. Penjumlahan"<<endl;
	cout << "2. Pengurangan"<<endl;
	cout << "3. Luas Persegi Panjang"<<endl;
	cout << "4. Luas Lingkaran"<<endl;
	
	cout << "Masukkan Pilihan : ";
	cin >> 	 pilihan;
	
	switch (pilihan){
		case 1 :
		int bil1, bil2, hasil;
		cout <<"Masukkan bilangan pertama : ";
		cin >> bil1;
		cout <<"Masukkan bilangan kedua : ";
		cin >> bil2;

		hasil = bil1 + bil2;

		cout<<"Hasilnya : "<<hasil;
		
		break;

	}
	switch (pilihan){
		case 2 :
		int bil1, bil2, hasil;
		cout <<"Masukkan bilangan pertama : ";
		cin >> bil1;
		cout <<"Masukkan bilangan kedua : ";
		cin >> bil2;

		hasil = bil1 - bil2;

		cout<<"Hasilnya : "<<hasil;
		
		break;
	}
	
	switch (pilihan){
		case 3 :
		int panjang, lebar, hasil;
		cout <<"Masukkan bilangan pertama : ";
		cin >> panjang;
		cout <<"Masukkan bilangan kedua : ";
		cin >> lebar;

		hasil = panjang * lebar;

		cout<<"Hasilnya : "<<hasil;
		
		break;
	}
	switch (pilihan){
		case 4 :
		int jarijari, hasil;
		cout <<"Masukkan bilangan pertama : ";
		cin >> jarijari;
		cout <<"Masukkan bilangan kedua : ";
		cin >> hasil;

		hasil = 3.14 * jarijari * jarijari;

		cout<<"Hasilnya : "<<hasil;
		
		break;
	}


		
}

