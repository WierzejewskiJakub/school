#include <iostream>

using namespace std;

class school {
	public:
	static string s_school;
	static string s_jobPosition;
	string name;
	string surname;
	
	void getData();
	void setNameSurname(string name, string surname, string s_school);
};

string school::s_school="ZSK";
string school::s_jobPosition="Student";

void school::getData(){
	cout<<"Imiê i Nazwisko: "<<name<<" "<<surname<<"\nSzko³a: "<<s_school<<endl;
}

void school::setNameSurname(string pname, string psurname, string s_school) {
	name=pname;
	surname=psurname;
	school::s_school=s_school;
}
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	cout<<school::s_school<<endl;
	cout<<school::s_jobPosition<<endl;
	
	school kowalski;
	kowalski.setNameSurname("Janusz", "Kowalski", "CDV");
	kowalski.getData();	
	
	
	
	return 0;
}
