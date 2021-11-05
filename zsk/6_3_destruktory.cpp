#include <iostream>

using namespace std;



class Worker{
	public:
	string name;
	float liczbaobiektow;
	void getData();
	Worker();
	Worker(string pName);
	~Worker(){
		cout<<"Destruktor"<<endl;
		liczbaobiektow--;
		cout<<"Liczba obiekt�w: "<<liczbaobiektow<<endl;	
	};
	
};

Worker::Worker(){
	cout<<"konstruktor domy�lny"<<endl;
	liczbaobiektow++;
	cout<<"Liczba obiekt�w: "<<liczbaobiektow<<endl;
}

Worker::Worker(string pName){
	name=pName;
	cout<<"konstruktor parametryczny"<<endl;
	liczbaobiektow++;
	cout<<"Liczba obiekt�w: "<<liczbaobiektow<<endl;
}

void Worker::getData(){
	cout<<"\nImi�: "<<name<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker kowal("John");
	kowal.getData();
	return 0;
}
