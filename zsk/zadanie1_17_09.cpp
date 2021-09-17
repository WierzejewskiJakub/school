#include <iostream>

using namespace std;

struct Date {
	unsigned short int d, m, rrrr;
};

struct Student {
	string name, surname;
	unsigned int id;
	Date birthDate;
	unsigned short int gradeInformatics[5];
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Student kowalski {"Janusz", "Nowak", 1000, {17,9,2021}, {2,6,3,4,5}};
	cout<<"Dane pracownika:\n" << "Imiê i Nazwisko: " << kowalski.name<< " "
		<< kowalski.surname << "\nIdentyfikator studenta: "<< kowalski.id
		<< "\nData Urodzenia: "<< kowalski.birthDate.d << "-"<<kowalski.birthDate.m<<"-"<<kowalski.birthDate.rrrr
		<< "\nOceny studenta z informatyki:\n";
		
		for (unsigned int i=0; i<=4; i++) {
			cout<< i+1 << " ocena: "<< kowalski.gradeInformatics[i] <<endl;
		} 
	
	return 0;
}
