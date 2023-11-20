#include <iostream>
using namespace std;

int main (){
	
	int nilai;
	
	cout << "Masukan nilai : ";
	cin >>  nilai;
	
	if  (nilai >= 80){
		
	 cout << "nilai Anda A" << endl;
	} 
	
	else if (60 && nilai <= 100){
		cout << "nilai anda B" << endl;
	}
	else if (0 <= nilai > 60) {
		cout << "nilai anda C" << endl;
	}
	else{
	}
	
	return 0;
}

