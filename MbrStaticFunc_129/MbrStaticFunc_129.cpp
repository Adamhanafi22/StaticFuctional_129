#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; /*Definisi function*/ }
	static int getNim() { return nim; /*Definisi function*/ }

	mahasiswa(string pnama) :nama(pnama) { setID(); }
}; 

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printAll() {
	cout << "ID =" << id << endl;
	cout << "nama =" << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Sri dadi");
	mahasiswa mhs2("Budi jatmiko");
	mahasiswa::setNim(9);
	mahasiswa mhs3("Andi janu");
	mahasiswa mhs4("Joko wahono");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
	
	cout << "Akses dari luar object=" << mahasiswa::getNim() << endl;
	return 0;

}
