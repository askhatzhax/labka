#include<string.h>
#include<iostream>
using namespace std;
class Hospital {
private:
	int id;
	string name, name1,bolit;
public:
	Hospital() {
		this->name = "";
		this-> name1= "";
		this->bolit = "";
		this->id = 0;};
	Hospital(int id, string name, string name1, string bolit) {
		this->name = name;
		this->name1 = name1;
		this->bolit = bolit;
		this->id = id;};
	Hospital(const Hospital& obj) {
		this->name = obj.name;
		this->name1 = obj.name1;
		this->bolit = obj.bolit;
		this->id = obj.id;
	};
	int getID() { return id; };
	string getBolit() { return bolit; };
	string getName() { return name; };
	string getName1() { return name1; };
	friend istream& operator>>(istream& in, Hospital& obj) {
		setlocale(LC_ALL, "Russian");
		cout << "ID : ";
		in >> obj.id;
		cout << "��� : ";
		in >> obj.name;
		cout << "������� : ";
		in >> obj.name1;
		cout << "��� �����? : ";
		in >> obj.bolit;
		return in;
	};
	string diagnoz;
	friend ostream& operator<<(ostream& out, Hospital obj) {
		setlocale(LC_ALL, "Russian");
		if (obj.bolit == "hand") { obj.diagnoz = "perelom"; }
		if (obj.bolit == "�����������"){ obj.diagnoz = "coronavirus";}
		if(obj.bolit == "nichego") {obj.diagnoz = "������";}
		if(obj.bolit == "foot") {obj.diagnoz = "����������";}
		out << "\n��� : " << obj.name << "\n������� : " << obj.name1 << "\nID : " << obj.id << "\n�����: " << obj.bolit<<"\nmaybe diagnoz :"<<obj.diagnoz <<endl;
		return out;
	};
	bool operator ==(const Hospital& other) { return this->bolit == other.bolit; }
	bool operator !=(const Hospital& other) { return this->bolit != other.bolit; }
	
	/*bool operator <(const FootballPlayers& other) { return this->value < other.value; }*/
};