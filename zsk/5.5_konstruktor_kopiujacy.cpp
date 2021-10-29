#include <iostream>

using namespace std;

class Rectangle{
	private:
		double sideA;
		double sideB;
	public: 
		Rectangle();
		Rectangle(double pSideA, double pSideB);
		Rectangle(const Rectangle &);
		
		void catchSides(double&, double&);
		void setSides(double pSideA, double pSideB);
		void getSides();
		double area();
		double circuit();
};
		
	Rectangle::Rectangle(){
		cout<<"Konstruktor domyœlny"<<endl<<endl;
	}
	Rectangle::Rectangle(double pSideA, double pSideB){
		sideA=pSideA;
		sideB=pSideB;
		cout<<"Konstruktor parametryczny"<<endl<<endl;
	}
	Rectangle::Rectangle(const Rectangle & model){
		sideA=model.sideA;
		sideB=model.sideB;
		cout<<"Konstruktor kopiuj¹cy"<<endl<<endl;
	}
		
	void Rectangle::catchSides(double&pSideA, double&pSideB){
		pSideA=sideA;
		pSideB=sideB;
	}
	void Rectangle::setSides(double pSideA, double pSideB){
		sideA=pSideA;
		sideB=pSideB;
	}
	void Rectangle::getSides(){
		cout<<"Bok a: "<<sideA<<"\nBok b: "<<sideB<<endl;
	}
	double Rectangle::area(){
		return sideA * sideB;
	}
	double Rectangle::circuit(){
		return 2 * sideA + 2 * sideB;	
	}
	
	Rectangle copyRectangle(Rectangle rectangle){
		return rectangle;
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	double a,b;
	
	cout<<"\nPierwszy prostok¹t: "<<endl;
	
	Rectangle p1(10, 20);
	
	p1.getSides();
	p1.catchSides(a, b);
	cout<<"\nBok a: "<<a<<"\nBok b: "<<b<<endl;
	
	cout<<"\n\nDrugi prostok¹t: "<<endl;
	
	Rectangle p2=p1;
	
	p2.getSides();
	p2.catchSides(a, b);
	cout<<"\nBok a: "<<a<<"\nBok b: "<<b<<endl;
	
	cout<<"\n\nTrzeci prostok¹t: "<<endl;
	
	Rectangle p3(p1);
	
	p3.getSides();
	p3.catchSides(a, b);
	cout<<"\nBok a: "<<a<<"\nBok b: "<<b<<endl;
	
	cout<<"\nCzwarty prostok¹t: "<<endl;
	
	Rectangle p4;
	p4=copyRectangle(p1);
	p1.getSides();
	p1.catchSides(a, b);
	cout<<"\nBok a: "<<a<<"\nBok b: "<<b<<endl;
	
	
	return 0;
}
