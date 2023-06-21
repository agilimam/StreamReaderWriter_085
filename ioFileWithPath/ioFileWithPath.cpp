#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string baris;
	string Namafie;

	cout << "Masukkan Nama File : ";
	cin >> Namafie;

	//Membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open(Namafie + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;
}