
#include <iostream>
#include<algorithm>
#include<queue>
#include<list>
#include<stack>
#include "Hospital.h"
#include "Hospital2.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    queue<Hospital> q;
    stack<Hospital2> st;
    q.push(Hospital(0111, "Askhat", "Zhax", "foot"));
    q.push(Hospital(0112, "Asan", "Zhax", "температура"));
    q.push(Hospital(0113, "Nariman", "Murza", "hand"));
    q.push(Hospital(0114, "Arman", "Taimshev", "heart"));
    q.push(Hospital(0115, "Nursultan", "Nazarbayev", "nichego"));
    int a = 1;
    cout << "Добрый день Доктор, сегодня запланировано 10 пациентов, они уже ждут.\n";
    cout << "Ecли вы готовы принмать пациентов введите 1, если не готовы введите 0\n";
    cin >> a;
    if (a == 1) {
        cout << "";
        cout << "Bо время приема пациента я буду вам помогать,\n";
        cout << " краткой информацией о пациенте и возможном диагнозе.\n";
        cout << "Вы оцениваете состояние пациента и ставите соответствующий диагноз\n";
        cout << "как со мной работать ? \n очень просто : )\n для перехода к след пациенту введите 1, \n для перерыва введите 2, \n для завершения приема пациентов на сегодня нажмите 0\n ";
    }
    else {
        cout << "ОШИБКА , у вас нет выбора \n";
        cout << "Bо время приема пациента я буду вам помогать,\n";
        cout << " краткой информацией о пациенте и возможном диагнозе.\n";
        cout << "Вы оцениваете состояние пациента и ставите соответствующий диагноз,\n";
        cout << "\n как со мной работать?\n очень просто :)\n для перехода к предыдущему пациенту введите 3\n для перехода к след пациенту введите 1,\n для перерыва введите 2,\n для завершения приема пациентов на сегодня нажмите 0\;";
    }
    while (a != 0 || !q.empty()) { 
        cout << q.front();
        int i; cout << "ID  пациента"; cin >> i;
        string n; cout << "\nокончательный диагноз"; cin >> n;
        st.emplace(i, n);
        cout << "\nСлед действие : "; cin >> a;
        /* if (a == 2) { cout << "перерыв 5 с \n 5 \n 4 \n 3 \n 2 \n 1 \n за работу!"; */

        if (a == 3) { cout << st.top() << "\n"; }
        q.pop();
    }

	
}
