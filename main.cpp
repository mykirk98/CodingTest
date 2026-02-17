#include <iostream>
using namespace std;



void Q1000()
{
	int A, B;
	cin >> A >> B;
	cout << A + B << endl;
}

void Q1001()
{
	int A, B;
	cin >> A >> B;
	cout << A - B << endl;
}

void Q10998()
{
	int A, B;
	cin >> A >> B;
	cout << A * B << endl;
}

void Q1008()
{
	double A, B;
	cin >> A >> B;

	cout.precision(12);
	cout.fixed;
	cout << A / B << endl;
}

void Q10869()
{
	int a, b;
	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
}

void Q2739()
{
	int N;
	cin >> N;

	for (int i = 1; i < 10; i++)
	{
		cout << N << " * " << i << " = " << N * i << endl;
	}
}

int main()
{
	Q2739();

	return 0;
}