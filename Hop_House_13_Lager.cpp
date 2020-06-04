#include <iostream>
#include "Hop_House_13_Lager.h"
using namespace std;

Hop::Hop(){ ; }
void Hop :: setHop(int a)
{
	n += a;
}
void Hop :: Result()
{
	if (n <= 2)
	{
		cout << "È© ÇÏ¿ì½º ÀÜ : " << n << endl;
		Final += n * 8000;
	}
	else
	{
		int share = n / 3;
		int remainder = n % 3;
		cout << "È© ÇÏ¿ì½º ÀÜ : " << n - share << ", ÀÌº¥Æ® È© ÇÏ¿ì½º ÀÜ : " << share << endl;
		Final += (n - share) * 8000;
	}
}