// Laboratorna 4.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Манькевич Дар'я
// Лабораторна робота № 4.1
// Цикли
// Варіант 10

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int  N, i;
	double P;
	cout << "N = "; cin >> N;

	P = 1;
	i = N;
	while (i <= 16)
	{
		P *= ((1. * i) * N) / ((1. * i) * (1. * i) + N * N);
		i++;
	}
	cout << P << endl;

	P = 1;
	i = N;
	do {
		P *= ((1. * i) * N) / ((1. * i) * (1. * i) + N * N);
		i++;
	} while (i <= 16);
	cout << P << endl;

	P = 1;
	for (i = N; i <= 16; i++)
	{
		P *= ((1. * i) * N) / ((1. * i) * (1. * i) + N * N);
	}
	cout << P << endl;

	P = 1;
	for (i = 16; i >= N; i--)
	{
		P *= ((1. * i) * N) / ((1. * i) * (1. * i) + N * N);
	}
	cout << P << endl;

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
