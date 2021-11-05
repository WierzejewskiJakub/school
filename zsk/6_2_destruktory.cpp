#include <iostream>

using namespace std;

class Worker {
	public:
		string name, surname;
		Worker();
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout<<endl<<"Wywo�anie destruktora"<<endl<<endl;
		}
		
		void getData();
		
		
};

Worker::Worker(){
	cout<<"Konstruktor domy�lny"<<endl<<endl;;
}

Worker::Worker(string pName, string pSurname):
	name {pName},
	surname {pSurname}
{
	cout<<"Konstruktor parametryczny"<<endl<<endl;
}

void Worker::getData(){
	cout<<"Imie: "<<name<<"\nNazwisko: "<<surname<<endl;
}

void createObject(string pName, string pSurname){
	Worker worker(pName, pSurname);
	worker.getData();
	cout<<"Wywo�anie funkcji create"<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Worker kowalski = Worker("Janusz", "Kowalski");
	kowalski.getData();
	
	cout<<"Wska�nik\n";
	
	Worker *p_kowalski = new Worker("Jan", "Kowalski");
	
	//KARTK�WKA!!!!
	
	delete p_kowalski;
	
	createObject("Jan", "Kowalski");
	return 0;
}
