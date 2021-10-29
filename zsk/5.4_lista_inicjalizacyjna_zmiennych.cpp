#include <iostream>

using namespace std;

class Car {
	unsigned int id;
	public:
		
		string brand;
		string model;
		
		void getData();
		
		Car();
		Car(string brand);
		Car(unsigned int pId, string pBrand, string pModel);
};

void Car::getData(){
	cout<<"Id: "<<id<<"\nMarka i model: "<<brand<<" "<<model<<endl;
}

Car::Car():
	id{0},
	brand{"Marka"},
	model{"Model"}
	{
		cout<<"Konstruktor domyœlny"<<endl<<endl;
	}
	Car::Car(string pBrand):
		brand{pBrand}
		{
			cout<<"Konstruktor jedno parametryczny"<<endl<<endl;
		}
	
	Car::Car(unsigned int pId, string pBrand, string pModel):
		id {pId},
		brand {pBrand},
		model {pModel}	
		{
			cout<<"Konstruktor parametryczny"<<endl<<endl;
		}
	



int main(int argc, char** argv) {
		setlocale(LC_CTYPE, "polish");
		
		Car fiat;
		fiat.getData();
		
		Car fiat1 = Car();
		fiat1.getData();
		
		Car fiat2(10, "Fiat", "Multipla");
		fiat2.getData();
		
		Car fiat3 = Car(20, "Fiat", "Multipla");
		fiat3.getData();
		
		Car fiat4 = Car("Wieœwagien");
		fiat4.getData();	
		
		//cout<<fiat3.id<<endl; nie zczyta bo id jest prywatne
		
		
	return 0;
}
