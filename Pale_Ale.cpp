#include <iostream>
#include "Pale_Ale.h"
using namespace std;

Pale::Pale() { ; }
void Pale::setPale(int a)
{
	n += a;
}
void Pale::Result()
{
	cout << "���� ���� �� : " << n << endl;
	Final += n * 7500;
}