// Лабораторна 3.2
// Лисецький Володимир
// Варіант 12


#include <iostream>
using namespace std;

int main()
{
	double x, a, b, c, F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// Спосіб 1. Неповне розгалуження
	if (x < 0.6 && b + c != 0)
		F = (a * x * x) + (b * b) + c;
	if (x > 0.6 && b + c == 0)
		F = (x - a) / (x - c);
	else
		F = x / c - x / a;

	cout << endl;
	cout << "1) F = " << F << endl;

	// Спосіб 2. Повне розгалуження 
	if (x < 0.6 && b + c != 0)
		F = (a * x * x) + (b * b) + c;
	else
		if (x > 0.6 && b + c == 0)
			F = (x - a) / (x - c);
		else
			F = x / c - x / a;
	
	cout << "2) F = " << F << endl;
	cin.get();

	return 0;
}

