#include <iostream>
using namespace std;

int main () {
	
	char grade;
	
	cout << "inputkan grade: ";
	cin >> grade;
	
	switch (toupper(grade)) {
		case 'A':
			cout << "luar biasa !" << endl;
			break;
		case 'B':
		case 'c':
			cout << "bagus !" << endl;
			break;
		case 'D':
			cout << "Anda lulus" << endl;
			break;
		case 'E':
		case 'F':
			cout << "Anda remidi" << endl;
			break;
		default:
			cout << "grade salah! " << endl;
			
	}
	
	return 0;
}
