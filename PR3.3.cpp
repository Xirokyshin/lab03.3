// Lab_03_3.cpp
// < Томашівський Максим >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double R1; // вхідний параметр
	double R2; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -2)
		y = -R1 * (x + 2);
	else
		if (x > -2 && x <= 0)
			y = -R1 - sqrt(R1 * R1 - (x + 1) * (x + 1));
		else
			if (x > 0 && x <= 1)
				y = R2 - sqrt(R2 * R2 - (x - 1) * (x - 1));
			else
				if (x > 1 && x <= 4)
					y = R2;
				else
					y = R2 * (x - 4) / 2 + R2;

	cout << endl;

	cout << "y = " << y << endl;

	cin.get();
	return 0;
}