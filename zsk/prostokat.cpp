#include <iostream>

using namespace std;

class rectangle{
	public:
		float height, width;
		
		float showArea();
		
		float showCircumference();
		
};

float rectangle::showArea(){
	return height*width;
}

float rectangle::showCircumference(){
	return (2*height)+(2*width);
}

//float showCircumference() {
//	return (2*height)+(2*width);
//
//}
//
//showCircumference();

int main(int argc, char** argv) {
	
	//setlocale(LC_TYPE,"polish");
	
	rectangle first;
	
	cout<<"Podaj Wysokoœæ i Szerokoœæ";
	
	cin >> first.height;
	
	cin >> first.width;
	
	first.showArea();
	
	first.showCircumference();
	
	cout<<"Pole: "<<first.showArea()<<endl;
	
	cout<<"Obwód: "<<first.showCircumference()<<endl;
	return 0;
}
