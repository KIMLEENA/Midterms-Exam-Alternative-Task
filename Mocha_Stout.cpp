#include <iostream>
#include "Mocha_Stout.h"
using namespace std;

Mocha::Mocha() { ; }
void Mocha::setMocha(int a)
{
	n += a;
}
void Mocha::Result()
{
	cout << "��ī ��Ÿ��Ʈ �� : " << n << endl;
	Final += n * 7500;
}