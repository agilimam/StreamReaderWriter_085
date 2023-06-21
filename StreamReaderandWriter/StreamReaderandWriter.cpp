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
	// selesai dalam mwenulis sekarang tutup file
	outfile.close();

	//Membuka file dalam mode membaca
	ifstream infile;
	//menunjuk ke sebah file
	infile.open("contohFile.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open())
	{
		//Melakukan perulangan setiap baris
		while (getline(infile, baris))
		{
			// dan tampilkan di sini
			cout << baris << '\n';
		}
		//tutup file  tersebut setelah selesai
		infile.close();
	}
	//jika tidak ditemukan file makan akan menampilkan hasil 
	else cout << "unable to open file";
	return 0;


}


