#pragma once
#include<string.h>
#include<iostream>
using namespace std;
class FootballPlayers{
private:
	int age, value;
	string name, club;
public:
	FootballPlayers() {
		this->age = 0;
		this->name = "";
		this->club = "";
		this->value = 0;};
	FootballPlayers(int age, string name, string club,int value) {
		this->age = age;
		this->name = name;
		this->club = club;
		this->value = value;};
	FootballPlayers(const FootballPlayers& obj) {
		this->age = obj.age;
		this->name = obj.name;
		this->club = obj.club;
		this->value = obj.value;
	};
	string getName() { return name; };
	string getClub() { return club; };
	int getAge() {return age;};
	int getValue() { return value; };
	friend istream& operator>>(istream& in, FootballPlayers& obj) {
		setlocale(LC_ALL, "Russian");
		cout << "Имя : ";
		in >> obj.name;
		cout << "Футбольный клуб : ";
		in >> obj.club;
		cout << "Возраст : ";
		in >> obj.age;
		cout << "Стоимость : ";
		in >> obj.value;
		return in;};
	friend ostream& operator<<(ostream& out, FootballPlayers obj) {
		setlocale(LC_ALL, "Russian");
		out << "\nИмя : " << obj.name << "\nФутбольный клуб : " << obj.club << "\nВозраст : " << obj.age << "\nСтоимость : " << obj.value<<endl;
		return out;};
	bool operator ==(const FootballPlayers& other) {return this->club == other.club;}
	/*bool operator >(const FootballPlayers& other) {return this->value > other.value;}*/
	/*switch (n){
	case 1:
		bool operator <(const FootballPlayers & other) { return this->value < other.value; }
		break;
	case 2:
		bool operator <(const FootballPlayers & other) { return this->age < other.age; }
		break;
	default:
		cout << "\nsorry so parapmetr is not be, so I sort on value\n";
			break;
	}*/
	bool operator <(const FootballPlayers& other) {return this->value < other.value;}
	/*string operator[] (int index) {
		return club;
	};*/
};

