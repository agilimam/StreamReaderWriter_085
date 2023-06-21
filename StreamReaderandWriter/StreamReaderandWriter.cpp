#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string baris;

	//Membuka File dalam mode Menulis.
	ofstream outfile;
	//Menununjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q'\' untuk keluar" << endl;
}