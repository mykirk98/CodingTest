#include <iostream>
using namespace std;



void Q1000()	// 2026/02/16 - 1번째 문제
{
	int A, B;
	cin >> A >> B;
	cout << A + B << endl;
}

void Q1001()	// 2026/02/16 - 2번째 문제
{
	int A, B;
	cin >> A >> B;
	cout << A - B << endl;
}

void Q10998()	// 2026/02/16 - 3번째 문제
{
	int A, B;
	cin >> A >> B;
	cout << A * B << endl;
}

void Q1008()	// 2026/02/16 - 4번째 문제
{
	double A, B;
	cin >> A >> B;

	cout.precision(12);
	cout.fixed;
	cout << A / B << endl;
}

void Q10869()	// 2026/02/16 - 5번째 문제
{
	int a, b;
	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
}

void Q2739()	// 2026/02/17 - 1번째 문제
{
	int N;
	cin >> N;

	for (int i = 1; i < 10; i++)
	{
		cout << N << " * " << i << " = " << N * i << endl;
	}
}

void Q10430()	// 2026/02/17 - 2번째 문제
{
	int A, B, C;
	cin >> A >> B >> C;

	cout << (A + B) % C << endl;
	cout << ((A % C) + (B % C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A % C) * (B % C)) % C << endl;
}

void Q2753()	// 2026/02/17 - 3번째 문제
{
	int year;
	cin >> year;

	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)	// ex 400, 800, 1200, ...
			{
				cout << 1 << endl;
			}
			else	// ex 100, 200, 300, 500, 600, ...
			{
				cout << 0 << endl;
			}
		}
		else	// ex 4, 8, 12, 16, ...
		{
			cout << 1 << endl;
		}
	}
	else
	{
		cout << 0 << endl;
	}
}

void Q2588()	// 2026/02/17 - 4번째 문제
{
	int a, b;
	cin >> a;
	cin >> b;

	int x, y, z;
	x = b / 100;
	y = (b % 100) / 10;
	z = b % 10;

	cout << a * z << endl;
	cout << a * y << endl;
	cout << a * x << endl;
	cout << a * b << endl;
}

void Q10950()	// 2026/02/17 - 5번째 문제
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int A, B;
		cin >> A >> B;

		cout << A + B << endl;
	}
}

int main()
{
	Q10950();

	return 0;
}