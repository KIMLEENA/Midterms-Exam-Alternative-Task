#include <iostream>
#include "Stella_Artois.h"
using namespace std;

Stella::Stella() { ; }
void Stella :: setStella(int a)
{
	n += a;
}
void Stella :: Result()
{
	if (n <= 3)
	{
		cout << "\n���ڶ� �� : " << n << endl;
		Final += n * 7500;
	}
	else
	{
		int share = n / 4;
		cout << "\n���ڶ� �� : " << n - share << ", �̺�Ʈ ���ڶ� �� : " << share << endl;
		Final += (n - share) * 7500;
	}
}