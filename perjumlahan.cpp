#include <iostream>
using namespace std;

int main (){
		int pilihan;
	
	cout << "1. Perjumlahan" << endl;
	cout << "2. pengurangan" << endl;
	cout << "3. Luas persegi" << endl;
	cout << "4. Luas lingkaran" << endl;
	
	cout << "masukan piihan: ";
	cin >> pilihan;
	
	if(pilihan ==1){
		int bill,bill2,hasil;
		cout << "masukan bilangan pertama: ";
		cin >> bill;
		cout << "masukan bilangan kedua: ";
		cin >> bill2;
		
		hasil = bill + bill2;
		
		cout << "hasilnya: " <<hasil;
		
	}
	
}
	

