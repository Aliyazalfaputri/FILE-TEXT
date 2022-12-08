#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
	//stream untuk menulis file
	ofstream myfile;
	
	//membuka file,
	//jika file tidak ditemukan maka file akan otomatis dibuat
	myfile.open("DDPRAKTIKUM.txt",ios::app);
	
	cout<<"----------------"<<endl;
	cout<<" ADD TEKS FILE"<<endl;
	cout<<"----------------"<<endl;
	
	//fail() -> untuk memeriksa suatu kesalahan pada operasi file
	if(!myfile.fail()){
		//menambah teks ke dalam file
		myfile<<"Masa iya sii"<<endl;
		cout<<"Text Berhasil ditambah ke dalam File"<<endl;
	}
	else{
		cout<<"File tidak ditemukan"<<endl;
	}
	_getche();
	return EXIT_SUCCESS;
}
