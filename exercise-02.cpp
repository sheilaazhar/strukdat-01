/*
Nama		: Sheila Azhar ALmufarida
NPM			: 140810180001
Tanggal Buat: 26 Februari 2019
Nama Program: Convert celcius to fahrenheit
Deskripsi	: Untuk mengubah celcius ke fahrenheit
*/

#include <iostream>

using namespace std;

float fahrenheit(int suhu){ //fungsi mengubah celcius menjadi fahrenheit
	return suhu*1.8+32; //rumus
}

int main(){
	int suhu;
	cout<<"Masukkan Suhu Celcius : ";cin>>suhu; //menginput suhu celcius
	cout<<"Dalam Fahrenheit : ";
	cout<<fahrenheit(suhu); //memanggil fungsi
}
