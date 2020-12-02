// ЛАБа 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include<algorithm>
#include"FootballPlayers.h"
#include<vector>
#include<list>
using namespace std;
template<typename T>
void PrintList(list<T>& lst) {
    for (auto i = lst.begin(); i != lst.end(); ++i) {//префиксный инкремент 
        cout << *i << "\n***********************************"; }}
int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Сколько игроков хотите создать?\n";
    int n; cin >> n;
    
    list<FootballPlayers> fp;
    for (int i = 0; i < n; i++) {
        string name, club;
        int value, age; cout << "Имя : ";
        cin>> name;
        cout << "Футбольный клуб : ";
        cin >> club;
        cout << "Возраст : ";
        cin >> age;
        cout << "Стоимость : ";
        cin >> value;
        fp.push_front(FootballPlayers(age,name,club,value));}
    cout << "\n***СОРТИРОВКА ПО УБЫВАНИЮ***\n";
    cout << "\n по какому свойству отсортировать элементы вектора ?\n";
    string s; cin >> s;
    fp.sort();
    PrintList(fp);
    cout << "\nкакой клуб вы ищете? "; string nameclub; cin >> nameclub;
    for_each(fp.begin(), fp.end(), [nameclub](FootballPlayers obj) {
            if (obj.getClub() == nameclub) {
                cout << obj << '\n'; cout << "\n--------------------------------------------\n";}});
        
    //fp.unique();//delete same elements which are near
    fp.clear();
    //cout << "Сколько игроков хотите создать?\n";
    
    //vector<FootballPlayers> fp(n);
    //for (int i = 0; i < n; i++) {
    //    cin >> fp[i];
    //    cout << "\n--------------------------------------------\n";}
    //FootballPlayers f;
    //cout << "\n***СОРТИРОВКА ПО УБЫВАНИЮ***\n";
    //cout << "\n по какому свойству отсортировать элементы вектора ?\n";
    //string s; cin >> s;
    //sort(fp.begin(), fp.end());
    //for (int i = 0; i < fp.size(); i++) {
    //    cout << fp[i] << '\n';
    //    cout << "\n--------------------------------------------\n";
    //}
    //cout << "\nкакой клуб вы ищете? "; string nameclub; cin >> nameclub;
    /////for (vector<FootballPlayers>::iterator i = fp.begin(); i != fp.end(); i++) {
    ////     if ((*i).getClub == nameclub) {
    ////         cout << *i << '\n';
    ////         cout << "\n--------------------------------------------\n";}}
    //// };*/
    ///*Лямбда - выражения — одна из фич функциональных языков,
    //    которую в последнее время начали добавлять также в императивные языки типа C#, 
    //    C++ etc.Лямбда - выражениями называются безымянные локальные функции, 
    //    которые можно создавать прямо внутри какого - либо выражения.*/
    //for_each(fp.begin(), fp.end(), [nameclub](FootballPlayers obj) {
    //    if (obj.getClub() == nameclub) {
    //        cout << obj << '\n'; cout << "\n--------------------------------------------\n";}});
    //
    //fp.clear();
}