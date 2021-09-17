#include <iostream>

using namespace std;

struct date {
	unsigned short int dd, mm, rrrr;
};

class worker {
	public:
		unsigned int id {};
		string name {}, surname {};
		date birthDate {};
		
		void showAllData();
		void setData(unsigned int x, string name, string surname, date setbirthDate);
};

void worker::showAllData(){
	cout << "Dane Pracownika:\nIdentyfikator: " << id
	<< "\nImiê i Nazwisko: "<<name << " " <<surname
	<<"\nData urodzenia: " <<birthDate.dd<<"-"<<birthDate.mm<<"-"<<birthDate.rrrr; 
}

void worker::setData(unsigned int x, string name, string setsurname, date setbirthDate){
	id=x;
	worker::name=name;
	surname= setsurname;
	birthDate=setbirthDate;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	worker kowalski;
	
	kowalski.setData(10, "Janusz", "Kowalski", {1, 3,2021});
	
	kowalski.showAllData();
	
	return 0;
}
