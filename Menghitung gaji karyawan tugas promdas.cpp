// Nama : Galih Pratama //
// Nim : 20051397083 //
// Percobaan kedua //

#include<iostream>
using namespace std;
main()
{
	char nama[20], golongan;
	int jam;
	long gaji, lembur;
	printf("\n              MENGHITUNG GAJI KARYAWAN\n");
	printf("\n                PT SEJAHTERAH ABADI\n");
	printf("\n------------------------------------------------------------\n\n");
	printf("NAMA KARYAWAN     : ");
	scanf("%s", &nama);
	printf("GOLONGAN (A,B,C,D); ");
	cin>>golongan;
	printf("JAM KERJA: ");
	cin>>jam;
	printf("\n----------------------------------------------------------------");
	lembur=4000;
	int lemburku=0;
	if (jam>48){
		lemburku=jam-48;
	}
	switch(golongan)
	{
		case 'A' :
			gaji = (jam-lemburku) * 5000;
			break;
		case 'B' :
			gaji = (jam-lemburku) * 7000;
			break;
		case 'C' :
			gaji = (jam-lemburku) * 8000;
			break;
		case 'D' :
			gaji = (jam-lemburku) * 10000;
			break;		
		default : 
			printf ("GOLONGAN TIDAK TERSEDIA! \n");
			gaji = 0;
			lembur = 0;
	}
    if (jam>48){
    	gaji = gaji+( (jam - 48)) * lembur;
	}	
	printf("\n NAMA KARYAWAN %S  \n",nama);
	printf("\n TOTAL GAJI MINGGUAN  : Rp. %i \n ",gaji);
}

