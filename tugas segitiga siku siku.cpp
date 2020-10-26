// Nama : Galih Pratama //
// Nim : 20051397083 //
// perbocbaan ketiga //

#include<iostream>
using namespace std;
int main(){
	int n;
	
	cout << "MASUKAN PANJANG POLA: ";
	cin >> n;
	 cout << "POLA\n";
	 for (int i = 1; i<= n; i++){
	 	for (int j =1; j<= i; j++){
	 		cout<<j;
		 }
		 cout << endl;
	 }
	for (int i = n-1; i>= 1; i--){
	 	for (int j =1; j<= i; j++){
	 		cout<<j;
		 }
		 cout << endl;
     }
}
