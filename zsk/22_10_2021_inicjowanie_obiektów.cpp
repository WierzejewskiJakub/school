#include <iostream>

using namespace std;
	
	class Car {
		public:
		unsigned int id=3;
		string brand="Fiat";
		string model="Multipla";
		
		void getData();
		Car(unsigned int pId, string pBrand, string pModel);
	};
	
	void getData() {
		cout<<"Id: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<endl;
	}
	
	Car::Car(unsigned int pId, string pBrand, string pModel) {
		id = pId;
		brand = pBrand;
		model = pModel;
	}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
		Car multipla();
		multipla.getData();
	return 0;
}
