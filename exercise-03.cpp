/*
Nama		: Sheila Azhar ALmufarida
NPM			: 140810180001
Tanggal Buat: 26 Februari 2019
Nama Program: swap
Deskripsi	: Untuk menukar angka
*/

#include <iostream>

using namespace std;

void swap(int& x, int& y){ //fungsi swap
	int temp;
	temp=x; 
	x=y;
	y=temp;
}

int main(){
	int x, y; //variable
	cout<<"x is ";cin>>x; //input nilai x
	cout<<"y is ";cin>>y; //input nilai y
	swap(x,y); //memanggil fungsi
	cout<<"After swap"<<endl;
	cout<<"x is "<<x<<endl; //hasil yang sudah di swap
	cout<<"y is "<<y<<endl; //hasil yang sudah di swap
}
