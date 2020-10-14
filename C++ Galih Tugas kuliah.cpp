// Galih Pratama //
// Nim: 20051397083 //
// percobaan 1 //

#include <iostream>
using namespace std;

int main (){
	string nameuser;
	int total_detik_mulai,total_detik_selesai,durasi,total_jam_pemakaian,pembayaran,sisa,total_menit_pemakaian,total_detik_pemakaian,jam1,jam2,menit1,menit2,detik1,detik2;
	
	cout<<"=========================================\n";
	cout<<"=========================================\n";
	cout<<"==============Biling Warnet==============\n";
	cout<<"=========================================\n";
	cout<<"=========================================\n";
	
	cout<<"Nama user \t = ";
	cin>>nameuser;
	cout<<"\n \n";
	
	cout<<"Mulai\n";
	cout<<"Jam Mulai \t = ";
	cin>>jam1;
	
	cout<<"Menit Mulai \t = ";
	cin>>menit1;
	
	cout<<"Detik Mulai \t = ";
	cin>>detik1;
	total_detik_mulai=(jam1*3600)+(menit1*60)+detik1;
	cout<<"\n \n";
	
	cout<<"Selesai\n";
	cout<<"Jam Selesai \t = ";
	cin>>jam2;
	cout<<"Menit Selesai \t = ";
	cin>>menit2;
	cout<<"Detik Selesai \t = ";
	cin>>detik2;
	total_detik_selesai=(jam2*3600)+(menit2*60)+detik2;
	durasi=total_detik_selesai-total_detik_mulai;
	
	pembayaran=durasi*5000/3600;
	total_jam_pemakaian=durasi/3600;
	sisa=durasi%3600;
	total_menit_pemakaian=sisa/60;
	total_detik_pemakaian=sisa%60;
	cout<<"\n \n";
	
	cout<<"Lama Pemakaian\n";
	cout<<"Jam = "<<total_jam_pemakaian<<endl;
	cout<<"Menit = "<<total_menit_pemakaian<<endl;
	cout<<"detik = "<<total_detik_pemakaian<<endl;
	cout<<"\n \n";
	
	cout<<"Harga Per Jam (Rp) = 5000, \n";
	cout<<"Jumlah Yang Harus Dibayar = "<<pembayaran<<endl;
	
	cout<<"=========================================\n";
	cout<<"=========================================\n";
	cout<<"==============Terimakasih================\n";
	cout<<"=========================================\n";
	cout<<"=========================================\n";
	
}
