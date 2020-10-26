// Nama : Galih Pratama //
// Nim : 20051397083 //

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int hasil = 0, a, b, kali;
	
	cout <<"------------------------------------------------------------------------------ " << endl;
	cout <<"		SELAMAT DATANG DI PROGRAM MENGHITUNG NILAI SUKU " << endl;
	cout <<"------------------------------------------------------------------------------ " << endl;
	cout << endl;
	cout <<"MASUKAN NILAI SUKU : ";
	cin >>b;
	
	for(a = 1; a <= b; a++){
		hasil = hasil + a * a * a;	
		kali = a * a * a;
		cout << kali << endl ;
}
cout <<"JUMLAH TOTAL : ";
cout <<hasil;
cin >> b;

    getch ();
	return 0;
}
