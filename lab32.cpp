﻿// lab32.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	float A, B, A1, C;
	cout << "Введите значение переменной A";
	cin >> A;
	cout << "Введите значение переменной В";
	cin >> B;
	cout << "Введите значение переменной C";
	cin >> C;
	A1 = A;
	A = C;
	C = B;
	B = A1;
	cout << "Выполняется перестановка значений...\n";
	cout << "Теперь А равно: " << A << "\n";
	cout << "Теперь В равно: " << B << "\n";
	cout << "Теперь C равно: " << C;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
