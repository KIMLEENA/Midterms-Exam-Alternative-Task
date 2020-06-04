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
	cout << "모카 스타우트 잔 : " << n << endl;
	Final += n * 7500;
}