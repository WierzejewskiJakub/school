#include <iostream>

using namespace std;

class Worker {
	public:
		string name, surname;
		Worker();
		Worker(string pName, string pSurname);
		
		~Worker(){
			cout<<"Wywo�anie destruktora"<<endl<<endl;
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
	cout<<"Imi�: "<<name<<"\nNazwisko: "<<surname<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	
	Worker nowak;

	return 0;
}
