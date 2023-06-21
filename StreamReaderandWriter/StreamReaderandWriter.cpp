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

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//Mendapatkan setiap karekter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika memasukkan karakter q
		if (baris == "q")break;
		//Menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}

}

