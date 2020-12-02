#include<string.h>
#include<iostream>
using namespace std;
class Hospital2 {
private:
	int id;
	string bolit;
public:
	Hospital2() {
		this->bolit = "";
		this->id = 0;
	};
	Hospital2(int id,string bolit) {
		this->bolit = bolit;
		this->id = id;
	};
	Hospital2(const Hospital2& obj) {
		this->bolit = obj.bolit;
		this->id = obj.id;
	};
	string getBolit() { return bolit; };
	friend istream& operator>>(istream& in, Hospital2& obj) {
		setlocale(LC_ALL, "Russian");
		cout << "ID : ";
		in >> obj.id;
		in >> obj.bolit;
		return in;};
	friend ostream& operator<<(ostream& out, Hospital2 obj) {
		setlocale(LC_ALL, "Russian");
		out << "\nID : " << obj.id << "\nБолит: " << obj.bolit << endl;
		return out;};
	bool operator ==(const Hospital2& other) { return this->bolit == other.bolit; }
	/*bool operator <(const FootballPlayers& other) { return this->value < other.value; }*/
}; 
