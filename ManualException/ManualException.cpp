#include<iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; // melemparkan sebuah interger maka
		cout << "Pernyataan tidak akan di eksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan di eksekusi
		cout << "Pengecualian akan di eksekusi" << endl;
	}
}