#include <iostream>

using namespace std;
class Vehicle{
	public:
		string brand, model;
		float fuelAmount, capacity, numberSeats;
		void applyBrakes(){
			cout<<"Hamowanie"<<endl;
		}
};
class Bus: public Vehicle{
	int numberOfStandingPlaces;
};
class Car: public Vehicle{
	
};
class Track: public Vehicle{
	bool semitrailer;
};
int main(int argc, char** argv) {
	
	return 0;
}
