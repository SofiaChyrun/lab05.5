// ChyrunSofialab5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_05_5.cpp
// < Чирун Софія >
// Лабораторна робота № 5.5
// Рекурсивні функції  
// Варіант 18

#include <iostream>
#include <cmath>
#include<complex>

using namespace std;

void f(double a, double b, double c, double d);

int main()
{
	double a, b, c, d;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "d = "; cin >> d;

	f(a,b,c,d);

	return 0;
}

void f(double a, double b, double c, double d)
{
	double r, s, D0, D1, D2, r1, s1;
	D0 = a * c;
	D1 = b * d;
	D2 = (b + a) * (d + c);
	//C=D1*(-1)+(D2-D0-D1)*i+D0
	r = D1 * (-1) + D0;
	s = (D2 - D0 - D1);
	r1 = b * d * (-1) + a * c;
	s1 = (a + b) * (c + d) - a * c - b * d;

	cout << "(a+i*b)*(c+i*d)=r+i*s=" << r << "+i*" << s << endl;
	cout << "(a+i*b)*(c+i*d)=r+i*s=" << r1 << "+i*" << s1 << endl;
	
}
