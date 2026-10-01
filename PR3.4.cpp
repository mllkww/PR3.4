// Lab_03_4.cpp
// Кепіч Людмила
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 13
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R1;   // вхідний параметр - радіус більшого кола
	double R2;   // вхідний параметр - радіус меншого кола

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	
	// розгалуження в повній формі
	if ((x <= 0 && y >= 0 && x * x + y * y <= R2 * R2) ||
		(x >= 0 && y <= 0 && x * x + y * y >= R2 * R2 && x * x + y * y <= R1 * R1))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}