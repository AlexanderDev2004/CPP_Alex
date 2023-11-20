#include <iostream> 

using namespace std;

int main(){
	int pilihan;
	
	int bil1,total,jum,bayar,kembali,pil;
	char backtomenu;

	cout << "1. Ekonomi"<<endl;
	cout << "2. Bisnis"<<endl;
	cout << "3. Eksekutif"<<endl;
	
	cout << "Masukkan Pilihan : ";
	cin >> 	 pilihan;
	
	switch (pilihan){
		case 1 :
		cout <<"===== Ekonomi ===== : "<<endl;
		
		cout << "Harga tiket Rp 1000/org "<<endl;
		cout << "jumlah orang : ";
		cin >> bil1;
		
		total = bil1 * 1000;
		
		cout << "total pembayaran : "<< total;
		
	break;
	}
	
	switch (pilihan){
		case 2 :
		cout <<"===== Bisnis ===== : "<<endl;
		
		cout << "Harga tiket Rp 3000/org "<<endl;
		cout << "jumlah orang : ";
		cin >> bil1;
		
		total = bil1 * 3000;
		
		cout << "total pembayaran : "<< total;
		
	break;
	}

	switch (pilihan){
		case 3 :
		cout <<"===== Eksekutif ===== : "<<endl;
		
		cout << "Harga tiket Rp 10000/org "<<endl;
		cout << "jumlah orang : ";
		cin >> bil1;
		
		total = bil1 * 10000;
		
		cout << "total pembayaran : "<< total;
		
	break;
	}
	
	cout<<endl;
	
	switch(pil){
		case 1 :
			cout<<"Harga tiket Rp 1000/org"<<endl;
			cout<<"masukan jumlah: ";
			cin>>jum
			cout<<endl;
			total = jum + 1000;
			cout<<"total bayar "<<total<<endl;
			cout<<"bayar : ";
			cin>>bayar;
				kembali = bayar - total;
				cout<<"Kembalian : "<<kembali<<endl;
				
				cout <<endl<<"apakah Anda ingin membeli sesuatu ? [Y/N]";
				cin >> backtomenu;
				
				system("cls");
				
				if (backtomenu == 'Y' || backtomenu == 'y'){
					goto menuutama
				}
				else{ 
					"Terimah kasih sudah membeli Di sini";
				}
	}
}
