#include <iostream>
using namespace std;

int main (){
	
	float kehadiran, tugas, uts, uas, hslkehadiran, hsltugas, hsluts, hsluas, jumblah;
	const float a=10, b=20 , c=30 , d=40;
	
	cout << "***************************************************"<< endl;
	cout << "             		input 1-100		  		   "<< endl;
	cout << "************************************************"<< endl;
	cout << "masukan nilai kehadiran : ";
	cin>> kehadiran;
	cout << "masukan nilai tugas : ";
	cin>> tugas;
	cout<< "masukan nilai uts : ";
	cin>> uts;
	cout<< "masukan nilai uas : ";
	cin >> uas;
	cout << "////////////////////////////////////////////////////"<< endl;
	cout << "					Presentase nilai				 "<< endl;
	cout << "kehadiran = 10%, tugas = 20%, uts = 30%, uas = 40%  "<< endl;
	cout << "////////////////////////////////////////////////////"<< endl;
	
	
	hslkehadiran = a / 100 * kehadiran;
	hsltugas = b / 100 * tugas;
	hsluts = c / 100 * uts;
	hsluas = d / 100 * uas;
	
	cout << "kehadiran : " << hslkehadiran << endl;
	cout << "Tugas     : " << hsltugas << endl;
	cout << "UTS       : " << hsluts << endl;
	cout << "Uas       : " << hsluas << endl <<endl;
	
	jumblah = hslkehadiran + hsltugas + hsluts + hsluas;
	
	cout << "jumblah : " << jumblah << endl << endl;
	
		if (jumblah >= 90 && jumblah <= 100){
			cout << "nilai anda : A" << endl;
		}
		else if (jumblah >= 75 && jumblah <= 89 ){
			cout << "nilai anda : B " << endl;
		}
		else if (jumblah >= 65 && jumblah <= 74 ){
			cout << "nilai anda : c " << endl;
		}
		else if (jumblah >= 40 && jumblah <= 64 ){
			cout << "nilai anda : d " << endl;
		}
		else if (jumblah >= 75 && jumblah <= 89 ){
			cout << "nilai anda : e " << endl;
	}
		else{
			cout << "hasil error data input tidak sesuai"<< endl;
		}
		
		cout << "***************************************"<< endl;
}
