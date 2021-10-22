#include <iostream>

using namespace std;

class Car {
	public:
		unsigned int id;
		string brand;
		string model;
		
		void getData();
		
		Car();
		
		Car(unsigned int pId, string pBrand, string pModel);
};

void Car::getData() {
	cout<<"id: "<<id<<"\nMarka: "<<brand<<"\nModel: \n"<<model<<endl;
}

Car::Car() {
	id = 0;
	brand = "Marka domyœlna";
	model = "Model domyœlny\n";
	cout<<"konstruktor domyœlny\n";
}

Car::Car(unsigned int pId, string pBrand, string pModel){
	id = pId;
	brand = pBrand;
	model = pModel;
	cout<<"\nKonstruktor parametryczny\n";
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Car car1 = Car (1, "Fiat", "Multipla");
	car1.getData();
	
	Car car2 = (10, "Fiat", "Multipla");
	car2.getData();
	return 0;
}
