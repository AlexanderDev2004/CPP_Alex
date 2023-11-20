#include <iostream>

using namespace std;

int main (){
	float v, r, s, t, Lp;
	const float phi = 3.14;
	
	cout<< "Alexander agung raya"<<endl;
	cout<< "X TKJ-1"<<endl;
	cout<< "6"<<endl<<endl;
	
	cout<<"Volume kerucut"<<endl;
	cout<<"inputkan r : " <<endl;
	cin>> r;
	cout<<"inputan t : "<<endl;
	cin>> t;
	cout<< "inputan s : "<<endl;
	cin>> s;
	
	v = 1 * phi * r * r * t;
	Lp = phi * r * (r+s);
	
	cout<<"Volume = "<< v <<endl;
	cout<<"Luas permukaan = " << Lp <<endl;
}
