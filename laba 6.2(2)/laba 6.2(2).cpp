#include<iostream>
#include<iomanip>
#include <time.h>

using namespace std;

void Create(int* q, const int size, const int Low, const int High, int i)
{
	q[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(q, size, Low, High, i + 1);
}

void Print(int* q, const int size, int i)
{
	cout << setw(4) << q[i];
	if (i < size - 1)
		Print(q, size, i + 1);
	else
		cout << endl;
}

int Sum(int* q, const int size, int i, int S)
{
	if (q[i] % 2 != 0)
		S += i;
	if (i < size - 1)
		return Sum(q, size, i + 1, S);
	else
		return S;
}


int main()
{
	srand((unsigned)time(NULL));
	int s;

	cout << "s = "; cin >> s;
	int* r = new int[s];

	int Low = 1;
	int High = 20;

	Create(r, s, Low, High, 0);
	cout << "q[s] =";

	Print(r, s, 0);
	cout << "Sum = " << Sum(r, s, 0, 0) << endl;

	return 0;
}
