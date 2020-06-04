#include <iostream>
#include "Kozel.h"
using namespace std;

Kozel::Kozel() { ; }
void Kozel::setKozel(int a)
{
	n += a;
}
void Kozel::Result()
{
	cout << "ÄÚÁ© ÀÜ : " << n << endl;
	Final += n * 6500;
}