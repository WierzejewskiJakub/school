#include <iostream>

using namespace std;

class worker{
	public:
		//deklaracje zmiennych cz�onkowskich (p�l, w�a�ciwo�ci)
		string name;
		string surname;
		int age; //doko�czy�,sprawdzi� typ danych
		//definicja funkcji cz�onkowskiej (metody)
		void showSurname(){
			cout<< "\nNazwisko pracownika: "<< surname;
		};
		//deklaracja (prototyp) metody
		void showAllData();
	
};

//definicja metody showAllData

void worker::showAllData(){
	cout<< "\nImi� i Nazwisko: "<< name<< " "<< surname;
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	worker pracownik1;
	pracownik1.name="Krystian";
	pracownik1.surname="Nowak";
	
	cout<< pracownik1.name<<" ";
	pracownik1.showSurname();
	
	pracownik1.showAllData();
	return 0;
}
