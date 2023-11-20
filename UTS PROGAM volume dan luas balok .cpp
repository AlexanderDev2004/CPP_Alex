#include <iostream>

using namespace std;

int main (){
	
	float v, r, L, t;
	const float phi = 3.14;
	
	cout <<"Progam  rumus tabung "<<endl<<endl;
	cout << "Alexander agung raya"<<endl;
	cout << " X TKJ-1"<<endl;
	cout << " 6"<<endl;
	
	cout <<"volume dan luas tabung"<<endl;
	cout<<"inputkan r : ";
	cin>> r;
	cout <<"imputan t :";
	cin>> t;
	//rumus
	v = phi * r * r * t;
	L = 2 * r * ( r + t );
	
	//hasil
	cout<< "Volume = " << v <<endl;
	cout<< "luas permukaan  = " << L;
	
} 
