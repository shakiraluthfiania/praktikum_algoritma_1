#include <iostream>
using namespace std;
 #define PHI 3.14
 int main ()
 {
	float r,s;
	float Kerucut,selimut;
	int phi=3.14;
	
	cout << " Program Pengerjaan Luas Dan Selimut Kerucut\n";
	
	cout << " \n Shakira Luthfiani A_123200165\n";
	
	cout << " \n masukkan Jari Jari : ";
	cin >> r;
	
	cout << " masukkan garis pelukis : ";
	cin >> s; 
	
	
	Kerucut   = phi*r*(r+s);
	selimut   = phi*r*s;
	
	
	cout <<" Luas permukaan Kerucut adalah		: "<<Kerucut<<endl;
	cout <<" Luas permukaan selimut adalah		: "<<selimut<<endl;
	return(0);
		
 }

