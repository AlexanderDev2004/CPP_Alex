#include <iostream>
using namespace std;

int main (){
	
	int nilai;
	
	cout << "Inputkan nilai: ";
	cin >> nilai;
	
	switch(nilai){
		case 1:
			cout << "Entery data" << endl;
			break;
		case 2:
			cout << "Cetak laporan" << endl;
			break;
		case 3:
			cout << "keluar" << endl;
			break;
			
		default:
			cout << "errorrrrrrrrr!!!!!!!!!!" << endl;
		
	}
	return 0;
}
