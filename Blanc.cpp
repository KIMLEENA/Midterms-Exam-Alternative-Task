#include <iostream>
#include "Blanc.h"
using namespace std;

Blanc::Blanc() { ; }
void Blanc::setBlanc(int a)
{
	n += a;
}
void Blanc::Result()
{
	cout << "��� �� : " << n << endl;
	Final += n * 8500;
}