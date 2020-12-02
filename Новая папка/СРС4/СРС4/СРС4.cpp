// SIS4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.Порядок выполнения:
#include <iostream>
#include<string>
#include"Header.h"
#include <map>
using namespace std;
int main(){
	setlocale(LC_ALL, "Russian");
	multimap<string, Library> m;
	m.insert(pair<string, Library>("Pushkin", Library("Eugeny Onegin", 1833, 100)));
	m.insert(pair<string, Library>("George", Library("1984", 1949, 34)));
	m.insert(pair<string, Library>("King", Library("It", 1986, 38)));
	m.insert(pair<string, Library>("King", Library("Black tower", 1993, 236)));
	int a = 1;
	cout << "sdasd";
	while (a != 0) {
		cout << "\n********************************\n";
		cout << "\nдобавление книги - 1 \nудаление книги - 2 \nВывод сведений о книгах по фамилиям авторов - 3 \nВывод сведений о книгах по указанному году издания - 4\nВывести все книги авторов - 10 \nзавершить программу - 0\n";
		cin >> a;
		switch (a)
		{
		case 10: {
			string name;
			for (auto i = m.begin(); i!= m.end(); i++) {
				if (name == i->first) { i++; }
				name = i->first;
				auto ret = m.equal_range(name);
				cout << name<< " =>\n";
				for (auto it = ret.first; it != ret.second; ++it)
					cout << ' ' << it->second;
				std::cout << '\n';
			
				
			}
			break;
		}
		case 3: {
			string n;
			cout << "Имя автора : ";cin >> n;
			auto i = m.find(n);
			if (i == m.end()) {
				cout << "\n *** ERROR, that author wasn't found *** \n";
			}
			else {
				for (auto it = m.begin(); it != m.end(); it++) {
					if (n == it->first) {
						cout << "\nAvtor : " << it->first << "\n" << it->second;}}}
			break;   }

		case 2: {
			cout << "Введите название книги : ";
			string k;
			int l = 0;cin >> k;
			for (auto it = m.begin(); it != m.end(); it++) {
				if (k == it->first) {
					m.erase(it->first); l = 1;
					cout << "Книга удалена";
				}
			}
			if(l==0) { cout << "\nИзвините, такой книги не найдено\n"; }
			break;   }
		case 1: {
			string c, v;
			int y, co;
			cout << "\nВведите имя автора : "; cin >> c;
			cout << "\nВведите название книги  : "; cin >> v;
			cout << "\nГод издания : "; cin >> y;
			cout << "\nКоличество экземпляров"; cin >> co;
			m.insert(pair<string, Library>(c, Library(v, y, co)));
			cout << "\nКнига добавлена";
			break;}
		case 4: {
			int n,k=0;
			cout << "Year : ";cin >> n;
			for (auto it = m.begin(); it != m.end(); it++) {
				if (n == it->second.getYear()) {k = 1;}}	
			if(k==1) {
				for (auto it = m.begin(); it != m.end(); it++) {
					if (n == it->second.getYear()) {
						cout << "\nАвтор : " << it->first << "\n" << it->second;}}}
			else { cout << "Извините, такой книги не найдено"; }
			break;   }

		case 0: {cout << "\n закрытие программы\n"; break; }
		default: { cout << "\n******* Ошибка, такой команды нет   ******\n"; }
		}
	}
}

//Порядок выполнения :
//1.	Создать многофайловый проект
//2.	В заголовочном файле :
//	 в комментариях, добавить краткое описание задания поставленного в этой лабораторной работе
//	Описать свой класс с использованием STL
//3.	В файле реализации функций
//	Реализовать функции - операции.
//4.	Реализовать интерфейс для работы с приложением.
//
//Варианты заданий :
//Задание 1
//Написать программу формирования частотного словаря появления отдельных слов в некотором тексте.Обеспечить :
//    	Чтение исходного текста из файла
//    	Вывод информации обо всех словах
//    	Вывод информации о наиболее часто встречающемся слове
//    	Запись результата в файл
//
//    Задание 2
//    Написать программу учета книг в библиотеке.Сведения о книгах : ФИО автора, название, год издания, количество экземпляров.
//Обеспечить :
//    	Добавление книг
//    	Удаление книг
//    	Вывод сведений о книгах по фамилиям авторов
//    	Вывод сведений о книгах по указанному году издания
//    Использовать контейнерный класс multimap
