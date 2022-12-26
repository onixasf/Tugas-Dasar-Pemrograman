#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int mat[100][100];
	int i,j, baris, kolom;
	
	cout << "==================================================="<<endl;
  	cout << " UAS Dasar Pemrograman"<<endl;
  	cout << "==================================================="<<endl;
  	cout << " Nama	: Onixa Shafa Putri Wibowo"<<endl;
  	cout << " NIM	: 1227050107"<<endl;
  	cout << "===================================================\n"<<endl;
	
	cout << "==================================================="<<endl;
    cout << "	Mengubah Baris dan Kolom "<<endl;
  	cout << "===================================================\n"<<endl;
	cout << " Masukkan jumlah baris: ";
	cin >> baris;
	cout << " Masukkan jumlah kolom: ";
	cin >> kolom;
	cout << endl;
	
	for (i = 0; i < baris; i++){
		for (j = 0; j < kolom; j++){
			cout <<" A["<<i+1<<"."<<j+1<<"] : ";
 			cin >> mat[i][j];
			 }
 		cout << endl;
	}
	
	cout << " Hasil: " << endl;
	
	for (i = 0; i < baris; i++){
		for (j = 0; j < kolom; j++){
			cout << "   " << mat[i][j] << " "; 
		}
		cout << endl;
	}
	
	cout << "\n Transpose: " << endl;
	
	for (i = 0; i < kolom; i++){
		for (j = 0; j < baris; j++){
			cout << "   " << mat[j][i] << " "; 
		}
		cout << endl;
	}
  	
  	int k[1000];
  	int a;
  	
  	cout << "==================================================="<<endl;
    cout << "	Memastikan bilangan yang habis dibagi 3,5 dan 7 "<<endl;
  	cout << "===================================================\n"<<endl;
  	cout << " Input nilai:  ";
  	cin >> k[a];
  	
  	for(a = 0; a < 1000; a++){
  			if(k[a]%3 == 0 && k[a]%5 == 0 && k[a]%7 == 0){
  				cout << k[a] << " adalah nilai yang habis dibagi dengan 3, 5 dan 7"<<endl;
  				break;
			  }
			else{
				cout << k[a] << " adalah nilai yang tidak habis dibagi dengan 3, 5 dan 7"<<endl;
				break;
			}
		  }
  	
 	return 0;
}
