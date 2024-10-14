#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i);
int Max(int* a, const int size);
int Min(int* a, const int size);
void Print(int* a, const int size, int i);
int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел
	const int n = 25;
	int a[n];
	int Low = 5;
	int High = 90;
	int sum = 0;
	Create(a, n, Low, High, 0);
	cout<< "Index of max" << setw(5) << "=" << setw(5) << Max(a, n) <<endl;
	cout<< "Index of min" << setw(5) << "=" << setw(5) << Min(a, n) << endl;
	Print(a, n, 0);
	return 0;
}
void Create(int* a, const int size, const int Low, const int High, int i)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

int Max(int* a, const int size)
{
	int max = a[size-1];
	int imax = -1; // індекс максимального елемента
	for (int i = 0; i < size-1; i++)
		if (max < a[i])
		{
			max = a[i];
			imax = i; 
		}
	if (imax == -1)
	{
		imax = size-1;
	}
	return imax;
}
int Min(int* a, const int size)
{
	int min = a[0];
	int imin = 0;
	for (int j = 1; j < size; j++)
		if (min > a[j])
		{
			min = a[j];
			imin = j;
		}
	if (imin == 0)
	{
		imin = 0;
	}
	return imin;
}
void Print(int* a, const int size, int i)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i]<<endl;
	cout << endl;
}