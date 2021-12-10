#include <iostream>

using namespace std;

//klasa bazowa(rodzic)
class Animal{
	public:
		string name;
		float weight, height;
		string breed;	
		void funcPublicAnimal() {
			cout<<"Funkcja publiczna klasy Animal"<<endl;
		}
		void funcAnimal(){
			cout<<"Funkcja Animal w klasie Animal"<<endl;
		}
		void setVaccination(bool pVaccination){
			vaccination = pVaccination;
		}
			private:
		 float age;
		 bool vaccination;
		
};
class Dog : public Animal{
	public:
		void bark() {
			cout<<"miau"<<endl;
		}
		void ejport(){
			cout<<"Przynieœ"<<endl;
		}	
		void funcAnimal(){
			cout<<"Funkcja Animal w klasie Dog"<<endl;
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Animal zwierze;
	zwierze.funcPublicAnimal();
	Dog burek;
	burek.funcPublicAnimal();
	burek.ejport();
	
	zwierze.setVaccination(1);
	zwierze.funcAnimal();
	burek.funcAnimal();
	return 0;
}
