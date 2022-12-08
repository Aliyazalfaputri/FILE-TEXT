#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
	//stream untuk menulis file
	ifstream myfile;
	char sv_text;
	
	//membuka file,
	//jika file tidak ditemukan maka file akan otomatis dibuat
	myfile.open("DDPRAKTIKUM.txt",ios::app);
	
	cout<<"----------------"<<endl;
	cout<<"  MEMBACA FILE"<<endl;
	cout<<"----------------"<<endl;
	
	//fail() -> untuk memeriksa suatu kesalahan pada operasi file
	if(!myfile.fail()){
		cout<<"Isi dari file : "<<endl;
		//ulang selama program belum mencapai akhir konten dari file
		while (!myfile.eof()){
			myfile.get(sv_text);
			cout<<sv_text;
		}
		myfile.close();//menutup file
	}
	else{
		cout<<"File tidak ditemukan"<<endl;
	}
	_getche();
	return EXIT_SUCCESS;
}
