// лаба1 задание4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	float a, b, s, d, p, m;
	cout << "Введите два числа";
	cin >> a >> b;
	s = a * a + b * b;
	d = a * a - b * b;
	p = (a * a) * (b * b);
	m = (a * a) / (b * b);
	cout << "s=" << s;
	cout << "d=" << d;
	cout << "p=" << p;
	cout << "m=" << m;
	return 0;
}

