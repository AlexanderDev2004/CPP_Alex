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

	if (pilihan == 1){
		int bil1, bil2, hasil;
		cout <<"Masukkan bilangan pertama : ";
		cin >> bil1;
		cout <<"Masukkan bilangan kedua : ";
		cin >> bil2;

		hasil = bil1 + bil2;

		cout<<"Hasilnya : "<<hasil;
	}
	
	else if (pilihan == 2){
		int bil1, bil2, hasil;
			cout <<"Masukkan bilangan pertama : ";
			cin >> bil1;
			cout <<"Masukkan bilangan kedua : ";
			cin >> bil2;
	
			hasil = bil1 - bil2;

			cout<<"Hasilnya : "<<hasil;
	}
		
	else if (pilihan == 3){
		int panjang, lebar, hasil;
		cout <<"Masukkan bilangan pertama : ";
		cin >> panjang;
		cout <<"Masukkan bilangan kedua : ";
		cin >> lebar;
		
		hasil = panjang * lebar;

		cout<<"Hasilnya : "<<hasil;
	}
	else if (pilihan == 4){
		int jarijari, hasil;
		cout <<"Masukkan bilangan pertama : ";
		cin >> jarijari;
		
		hasil = 3.14 * jarijari * jarijari;

		cout<<"Hasilnya : "<<hasil;
	}
	else{
		cout << "rusak broooooooooo";
	}
}
