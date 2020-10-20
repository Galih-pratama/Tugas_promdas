// Nama : Galih Pratama //
// Nim : 20051397083 //

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int alas,tinggi,luas,simir,keliling;
	
	int pil;
	cout << " PROGRAM MENGHITUNG RUMUS SEGITIGA " << endl;
	cout << "-----------------------------------" << endl;
	cout << " MENU SEGITIGA SIKU SIKU " << endl;
	cout << "1. MENGHITUNG PANJANG SISI MIRNG " << endl;
	cout << "2. MENGHITUNG LUAS " << endl;
	cout << "3. MENGHITUNG KELILING " << endl;
	cout << "4. KELUAR " << endl;
	cout << "-----------------------------------" << endl;
	cout << " SILAHKAN PILIH (1-4) : ";
	cin >> pil;
	
	switch(pil)
	{
		case 1:
			cout << "MENGHITUNG PANJANG SISI MIRING" << endl;
			cout << "MASUKAN ALAS    : "; cin>> alas;
			cout << "MASUKAN TINGGI  : "; cin>> tinggi;
			simir = sqrt((alas*alas)+(tinggi*tinggi));
			cout << "PANJANG SISI MIRING \t = "; cout<<simir;
			break;
			
		case 2:
			cout <<"MENGHITUNG LUAS" << endl;
			cout <<"MASUKAN ALAS     : "; cin>>alas;
			cout <<"MASUKAN TINGGI   : "; cin>>tinggi;
			luas = ((alas*tinggi)/2);
			cout <<"LUAS = "; cout<<luas;
			break;
			
		case 3:
			cout<<"MENGHITUNG KELILING " << endl;
			cout<<"MASUKAN ALAS      : "; cin>>alas;
			cout<<"MASUKAN TINGGI    : "; cin>>tinggi;
			keliling=(alas+tinggi+simir);
			cout<<"KELILING  = "; cout<<keliling;
			break;
			
		case 4:
			cout<<"KELUAR";	
	}
	exit (0);
}
