#include <iostream>
#include "Big_Wave_Golden_Ale.h"
using namespace std;

Big::Big() { ; }
void Big::setBig(int a)
{
	n += a;
}
void Big::Result()
{
	cout << "ÄÚ³ª ºò ¿þÀÌºê ÀÜ : " << n << endl;
	Final += n * 9500;
}