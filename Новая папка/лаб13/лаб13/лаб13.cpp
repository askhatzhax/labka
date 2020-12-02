// лаб13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>  
#include <chrono>
using namespace std;
const int nmax = 4000;

int main()
{
  setlocale(LC_ALL, "Russian");
	int a[4000],k=0;
    	for (int i = 4000; i > 0; i--) {a[k] = i; k++;}
        auto begin = std::chrono::steady_clock::now();
 for (int i = k - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;}}

    }
    
    cout << "BUBLE SORT The time: " << elapsed_ms.count() << " ms\n";
}

