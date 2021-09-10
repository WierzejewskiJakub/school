#include <iostream>

using namespace std;

class worker{
	public:
		//deklaracje zmiennych czlonkowskich (pol, wlasciwosci)
		string name, surname, nationality;
		unsigned short int birthyear;
		float height;
		char gender; 
		//definicja funkcji czlonkowskiej (metody)
		void showSurname(){
			cout<< "\nNazwisko pracownika: "<< surname;
		};
		//deklaracja (prototyp) metody
		void showNameSurname();
		void showAllData();
	
};


//definicja metod Surname i AllData
void worker::showNameSurname(){
	cout<< "\nImiê i Nazwisko: "<< name<< " "<< surname<<endl;
}

void worker::showAllData(){
		
	
	cout<<"\nDane Pracownika: "<<name<<" "<<surname<<endl<<"Narodowoœæ: "<<nationality<<endl<<"Rok urodzenia"<<birthyear<<endl<<"Wzrost: "<<height<<endl;
	cout<<"Gender: ";
	switch(gender){
		case 'm':
			cout<<"mê¿czyzna";
			break;
			
		case 'w':
			cout<<"kobieta";
			break;
			
		default:
			cout<< '-';
			
	}
	
	
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	worker pracownik1;
	
	pracownik1.name="Krystian";
	
	pracownik1.surname="Nowak";
	
	pracownik1.birthyear=1976;
	
	pracownik1.nationality="Poland";
	
	pracownik1.height=180.5;
	
	pracownik1.gender= 'w';
	
	cout<< pracownik1.name<<" ";
	
	pracownik1.showSurname();
	
	pracownik1.showNameSurname();
	
	pracownik1.showAllData();
	
	
	return 0;
}
