// Lab_03_3.cpp
// < ������������ ������ >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R1; // ������� ��������
	double R2; // ������� ��������
	double y; // ��������� ���������� ������

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
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