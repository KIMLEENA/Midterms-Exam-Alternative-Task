#include <iostream>
#include "Tap5h.h"
using namespace std;

Tap5::Tap5() { ; }
void Tap5::setTap5(int a)
{
	n += a;
}
void Tap5::Result()
{
	cout << "��5 �� : " << n << endl;
	Final += n * 8500;
}