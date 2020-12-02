#include <iostream>
#include<string>
using namespace std;
class Library {
private:
	string name;
	int year;
	int count;
public:
	Library() {
		this->name = "";
		this->year = 0;
		this->count = 0;
	};
	Library(string Name, int year, int count) {
		this->name = Name;
		this->year = year;
		this->count = count;
	};
	Library(const Library& obj) {
		this->name = obj.name;
		this->year = obj.year;
		this->count = obj.count;
	};
	int getYear() { return year; };
	string getName() { return name; };
	friend ostream& operator<<(ostream& o, Library obj) {
		o << "Name of book : " << obj.name << "\nYear : " << obj.year << "\nCount of exemplar : " << obj.count;
		return o;
	};
	bool operator ==(const Library& other) { return this->year == other.year; }
	/*bool operator ==(const Library& other) { return this->year == other.year; }*/
};

