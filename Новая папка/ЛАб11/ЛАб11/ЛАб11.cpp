// ЛАб11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<string>
#include<fstream>
#include <map>
#include<Windows.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	fstream fs;
	fs.open("lab11.txt", fstream::in | fstream::out | fstream::app);
	map <string, string> myMap = { { "Apple", "Яблоко" }, ///явная инициализация map
							   { "Banan","Банан" },
							   { "Car", "Автобомобиль" } };

	///присвоение элементам map новых значений
	/*myMap.at("Beta") = 0;
	myMap.at("Alpha") = 233;
	myMap.at("Gamma") = -45;*/
	int a=1;
	string m="";
	while (a != 0) {
		cout << "\n********************************\n";
		cout << "\nпоиск слова - 1 \nдобавление слова - 2 \nудаление слова - 3 \nредактирования слова - 4 \nчтение - 5 \nзапись словаря в файл - 6 \nзавершить программу - 0\n";
		cin >> a;
		switch (a)
		{
		case 1: {
			cout << "Введите слово : ";
			string c;
			cin >> c;
			auto it = myMap.find(c);
			if (it != myMap.end()) {
				cout << it->first << " : " << it->second << endl;
			}
			else { cout << "\nтакого слова нет в словаре\n"; }
			break;   }
		case 3: {
			cout << "Введите слово : ";
			string c;
			cin >> c;
			auto it = myMap.find(c);
			if (it != myMap.end()) {
				myMap.erase(c);
				cout << "слово удалено ";
			}
			else { cout << "\nтакого слова нет в словаре\n"; }
			break;   }
		case 2: {
			cout << "\nВведите слово : ";
			string c, v;
			cin >> c;
			cout << "\nВведите перевод слова : ";
			SetConsoleCP(1251);
			cin >> v;
			myMap[c] = v;
			SetConsoleCP(866);
			cout << "\nслово добавлено";
			break;

		}
		case 4: {
			cout << "\nВведите слово : ";
			string c, v;
			cin >> c;
			auto it = myMap.find(c);
			if (it != myMap.end()) {

				cout << "\nИзмените перевод слова : ";
				SetConsoleCP(1251);
				cin >> v;
				myMap.at(c) = v;
				SetConsoleCP(866);
				cout << "\nпервод изменен";
			}
			else { cout << "\nтакого слова нет в словаре\n"; }
			break;
		}
		case 5: {
			cout << "\nЧтение из файла : \n";
				while (!fs.eof()) {
					m = "";
					fs>> m;
					cout << m<<endl;
			}
				
			break;
		}
		case 6: {
			cout << "\nЗапись в файл";
			cout << "\nДобавьте слово : ";
			cin >> m;
			string k= m + "::";
			cout << "\nДобавьте перевод слова : ";
			SetConsoleCP(1251);
			cin >> m;
			SetConsoleCP(866);
			m = k + m;
			fs <<m<<endl;
			break;
		}
		case 0: {cout << "\n закрытие программы\n"; break; }
		default: { cout << "\n******* Ошибка, такой команды нет   ******\n"; }
		}
	}
}
