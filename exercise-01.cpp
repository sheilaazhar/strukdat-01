/*
Nama		: Sheila Azhar ALmufarida
NPM			: 140810180001
Tanggal Buat: 26 Februari 2019
Nama Program: Fizz Buzz
Deskripsi	: Untuk print angka 1-100 dan menggantinya dengan fizz buzz
*/

#include <iostream>

using namespace std;

void fizzbuzz(int i){ //fungsi fizzbuzz
	for(i=1;i<=100;i++){ //looping untuk print angka
		if(i%3==0 & i%5==0){ //kondisi jika angka dapat dibagi 3 dan 5
		cout<<"FizzBuzz"<<endl;}
			else if(i%3==0){ //kondisi jika angka dapat dibagi 3
			cout<<"Fizz"<<endl;}
				else if(i%5==0){ //kondisi jika angka dapat dibagi 5
				cout<<"Buzz"<<endl;}
					else { //kondisi jika angka tidak memenuhi syarat diatas
					cout<<i<<endl;}
				}
			}

int main(){
	int i;
	fizzbuzz(i); //memanggil fungsi
}
