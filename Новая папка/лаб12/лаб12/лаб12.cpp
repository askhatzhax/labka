// лаб12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <map>
using namespace std;
class AvtoBus {
    string name;
    int Nbus;
public: 
	AvtoBus() {
		this->name = "";
		this->Nbus = 0;
	};
	AvtoBus(int Nbus, string name) {
		this->name = name;
		this->Nbus = Nbus;
	};

	friend ostream& operator<<(ostream& o, AvtoBus obj) {
		o << "Name of voditelya : " << obj.name << "\nNumber of avtobus : " << obj.Nbus;
		return o;
	}
};
int main()
{
	multimap<int, AvtoBus> map;
	map.insert(pair<int, AvtoBus>(1,AvtoBus( 1266, "Simson")));
	map.insert(pair<int, AvtoBus>(1, AvtoBus(1245, "Bob")));
	map.insert(pair<int, AvtoBus>(1, AvtoBus(1215, "Johny")));
	map.insert(pair<int, AvtoBus>(2, AvtoBus(1246, "Smit")));
	map.insert(pair<int, AvtoBus>(2, AvtoBus(5423, "Obama")));
	map.insert(pair<int, AvtoBus>(2, AvtoBus(1236, "Trump")));

	int n;
	cout << "number of route : ";
	cin >> n;
	auto i = map.find(n);
	if (i == map.end()) {
		cout << "\n *** ERROR, that route wasn't found *** \n";
	}
	else{
		for (auto it = map.begin(); it != map.end(); it++) {
			if (n == it->first) {
				cout << "\nNumber of route : " << it->first << "\n" << it->second;

			}
		}
	}
}
