#include <iostream>
#include "Goose_IPA.h"
using namespace std;

Goose::Goose() { ; }
void Goose::setGoose(int a)
{
	n += a;
}
void Goose::Result()
{
	cout << "���� IPA �� : " << n << endl;
	Final += n * 8500;
}