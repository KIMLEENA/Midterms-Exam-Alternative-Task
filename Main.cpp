#include <iostream>
#include "Stella_Artois.h"
#include "Hop_House_13_Lager.h"
#include "Big_Wave_Golden_Ale.h"
#include "Pale_Ale.h"
#include "Mocha_Stout.h"
#include "Goose_IPA.h"
#include "Tap5h.h"
#include "Kozel.h"
#include "Blanc.h"

using namespace std;

int b_1_1 = 0, b_1_2 = 0, b_1_3, b_1_4, b_1_5, b_1_6, b_1_7, b_1_8, b_1_9;
int b_2_1 = 0, b_2_2 = 0, b_2_3, b_2_4, b_2_5, b_2_6, b_2_7, b_2_8, b_2_9;
int b_5_1 = 0, b_5_2 = 0, b_5_3, b_5_4, b_5_5, b_5_6, b_5_7, b_5_8, b_5_9;
int b_6_1 = 0, b_6_2 = 0, b_6_3, b_6_4, b_6_5, b_6_6, b_6_7, b_6_8, b_6_9;
int b_7_1 = 0, b_7_2 = 0, b_7_3, b_7_4, b_7_5, b_7_6, b_7_7, b_7_8, b_7_9;
int b_8_1 = 0, b_8_2 = 0, b_8_3, b_8_4, b_8_5, b_8_6, b_8_7, b_8_8, b_8_9;
int b_9_1 = 0, b_9_2 = 0, b_9_3, b_9_4, b_9_5, b_9_6, b_9_7, b_9_8, b_9_9;
int b_10_1 = 0, b_10_2 = 0, b_10_3, b_10_4, b_10_5, b_10_6, b_10_7, b_10_8, b_10_9;
int b_11_1 = 0, b_11_2 = 0, b_11_3, b_11_4, b_11_5, b_11_6, b_11_7, b_11_8, b_11_9;
int b_12_1 = 0, b_12_2 = 0, b_12_3, b_12_4, b_12_5, b_12_6, b_12_7, b_12_8, b_12_9;
int b_13_1 = 0, b_13_2 = 0, b_13_3, b_13_4, b_13_5, b_13_6, b_13_7, b_13_8, b_13_9;
int b_16_1 = 0, b_16_2 = 0, b_16_3, b_16_4, b_16_5, b_16_6, b_16_7, b_16_8, b_16_9;
int b_17_1 = 0, b_17_2 = 0, b_17_3, b_17_4, b_17_5, b_17_6, b_17_7, b_17_8, b_17_9;

int main()
{
	while (true)
	{
		int t, n, m;
		cout << "************메뉴를 선택 해주세요************\n";
		cout << "*  1. POS로 이동                           *\n";
		cout << "*  2. 결제창으로 이동                      *\n";
		cout << "*  3. 프로그램 종료                        *\n";
		cout << "********************************************\n";
		cout << "입력해주세요 : ";
		cin >> m;
		if (m == 1)
		{
			while (true)
			{
				do {
					cout << "\n***************수제맥주집 POS***************\n";
					cout << "*                      [야외 1]   [야외 2] *\n";
					cout << "* [테이블 5]        [테이블 16] [테이블 17]*\n";
					cout << "* [테이블 6]                               *\n";
					cout << "* [테이블 7]        [테이블 12] [테이블 13]*\n";
					cout << "* [테이블 8]        [테이블 10] [테이블 11]*\n";
					cout << "* [테이블 9]                               *\n";
					cout << "********************************************\n";
					cout << "테이블을 선택해주세요 : ";
					cin >> t;
				} while (t != 1 && t != 2 && t < 5 || t > 13 && t != 16 && t != 17);
				do {
					cout << "\n*******************메뉴판*******************\n";
					cout << "* 1. 스텔라(3+1 행사중)            7500won *\n";
					cout << "* 2. 홉 하우스(2+1 행사중)         8000won *\n";
					cout << "* 3. 코나 빅 웨이브                9500won *\n";
					cout << "* 4. 페일 에일                     7500won *\n";
					cout << "* 5. 모카 스타우트                 7500won *\n";
					cout << "* 6. 구스 IPA                      8500won *\n";
					cout << "* 7. 탭5                           8500won *\n";
					cout << "* 8. 코젤                          6500won *\n";
					cout << "* 9. 블랑                          8500won *\n";
					cout << "********************************************\n";
					cout << "어떤 맥주를 주문하셨나요? : ";
					cin >> n;
				} while (n < 1 || n>9);
				if (t == 1)
				{
					if (n == 1)
					{
						b_1_1 += 1;
						break;
					}
					else if (n == 2)
					{
						b_1_2 += 1;
						break;
					}
					else if (n == 3)
					{
						b_1_3 += 1;
						break;
					}
					else if (n == 4)
					{
						b_1_4 += 1;
						break;
					}
					else if (n == 5)
					{
						b_1_5 += 1;
						break;
					}
					else if (n == 6)
					{
						b_1_6 += 1;
						break;
					}
					else if (n == 7)
					{
						b_1_7 += 1;
						break;
					}
					else if (n == 8)
					{
						b_1_8 += 1;
						break;
					}
					else if (n == 9)
					{
						b_1_9 += 1;
						break;
					}
					else
					{
						cout << "다시 입력하세요.\n";
					}
				}
				else if (t == 2)
				{
					if (n == 1)
					{
						b_2_1 += 1;
						break;
					}
					else if (n == 2)
					{
						b_2_2 += 1;
						break;
					}
					else if (n == 3)
					{
						b_2_3 += 1;
						break;
					}
					else if (n == 4)
					{
						b_2_4 += 1;
						break;
					}
					else if (n == 5)
					{
						b_2_5 += 1;
						break;
					}
					else if (n == 6)
					{
						b_2_6 += 1;
						break;
					}
					else if (n == 7)
					{
						b_2_7 += 1;
						break;
					}
					else if (n == 8)
					{
						b_2_8 += 1;
						break;
					}
					else if (n == 9)
					{
						b_2_9 += 1;
						break;
					}
					else
						cout << "다시 입력하세요.\n";
				}
				else if (t == 5)
				{
				if (n == 1)
				{
					b_5_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_5_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_5_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_5_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_5_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_5_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_5_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_5_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_5_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 6)
				{
				if (n == 1)
				{
					b_6_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_6_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_6_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_6_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_6_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_6_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_6_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_6_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_6_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 7)
				{
				if (n == 1)
				{
					b_7_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_7_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_7_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_7_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_7_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_7_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_7_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_7_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_7_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 8)
				{
				if (n == 1)
				{
					b_8_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_8_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_8_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_8_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_8_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_8_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_8_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_8_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_8_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 9)
				{
				if (n == 1)
				{
					b_9_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_9_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_9_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_9_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_9_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_9_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_9_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_9_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_9_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 10)
				{
				if (n == 1)
				{
					b_10_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_10_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_10_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_10_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_10_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_10_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_10_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_10_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_10_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 11)
				{
				if (n == 1)
				{
					b_11_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_11_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_11_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_11_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_11_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_11_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_11_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_11_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_11_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 12)
				{
				if (n == 1)
				{
					b_12_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_12_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_12_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_12_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_12_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_12_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_12_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_12_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_12_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 13)
				{
				if (n == 1)
				{
					b_13_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_13_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_13_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_13_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_13_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_13_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_13_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_13_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_13_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 16)
				{
				if (n == 1)
				{
					b_16_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_16_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_16_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_16_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_16_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_16_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_16_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_16_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_16_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";
				}
				else if (t == 17)
				{
				if (n == 1)
				{
					b_17_1 += 1;
					break;
				}
				else if (n == 2)
				{
					b_17_2 += 1;
					break;
				}
				else if (n == 3)
				{
					b_17_3 += 1;
					break;
				}
				else if (n == 4)
				{
					b_17_4 += 1;
					break;
				}
				else if (n == 5)
				{
					b_17_5 += 1;
					break;
				}
				else if (n == 6)
				{
					b_17_6 += 1;
					break;
				}
				else if (n == 7)
				{
					b_17_7 += 1;
					break;
				}
				else if (n == 8)
				{
					b_17_8 += 1;
					break;
				}
				else if (n == 9)
				{
					b_17_9 += 1;
					break;
				}
				else
					cout << "다시 입력하세요.\n";

				}
				else
				{
					cout << "다시 입력하세요.\n";
				}
			}
		}
		else if (m == 2)
		{
			while (true)
			{
				do {
					cout << "\n***************수제맥주집 POS***************\n";
					cout << "*                      [야외 1]   [야외 2] *\n";
					cout << "* [테이블 5]        [테이블 16] [테이블 17]*\n";
					cout << "* [테이블 6]                               *\n";
					cout << "* [테이블 7]        [테이블 12] [테이블 13]*\n";
					cout << "* [테이블 8]        [테이블 10] [테이블 11]*\n";
					cout << "* [테이블 9]                               *\n";
					cout << "********************************************\n";
					cout << "테이블을 선택해주세요 : ";
					cin >> t;
				} while (t != 1 && t != 2 && t < 5 || t>13 && t != 16 && t != 17);
				if (t == 1)
			{
				Stella* s = new Stella();
				s->setStella(b_1_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_1_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_1_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_1_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_1_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_1_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_1_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_1_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_1_9);
				bl->Result();
				cout << "야외 " << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 2)
			{
				Stella* s = new Stella();
				s->setStella(b_2_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_2_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_2_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_2_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_2_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_2_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_2_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_2_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_2_9);
				bl->Result();
				cout << "야외 " << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 5)
			{
				Stella* s = new Stella();
				s->setStella(b_5_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_5_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_5_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_5_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_5_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_5_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_5_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_5_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_5_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 6)
			{
				Stella* s = new Stella();
				s->setStella(b_6_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_6_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_6_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_6_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_6_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_6_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_6_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_6_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_6_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 7)
			{
				Stella* s = new Stella();
				s->setStella(b_7_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_7_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_7_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_7_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_7_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_7_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_7_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_7_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_7_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 8)
			{
				Stella* s = new Stella();
				s->setStella(b_8_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_8_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_8_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_8_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_8_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_8_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_8_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_8_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_8_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 9)
			{
				Stella* s = new Stella();
				s->setStella(b_9_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_9_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_9_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_9_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_9_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_9_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_9_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_9_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_9_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 10)
			{
				Stella* s = new Stella();
				s->setStella(b_10_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_10_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_10_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_10_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_10_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_10_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_10_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_10_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_10_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 11)
			{
				Stella* s = new Stella();
				s->setStella(b_11_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_11_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_11_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_11_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_11_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_11_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_11_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_11_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_11_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 12)
			{
				Stella* s = new Stella();
				s->setStella(b_12_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_12_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_12_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_12_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_12_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_12_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_12_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_12_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_12_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 13)
			{
				Stella* s = new Stella();
				s->setStella(b_13_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_13_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_13_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_13_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_13_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_13_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_13_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_13_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_13_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 16)
			{
				Stella* s = new Stella();
				s->setStella(b_16_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_16_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_16_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_16_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_16_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_16_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_16_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_16_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_16_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else if (t == 17)
			{
				Stella* s = new Stella();
				s->setStella(b_17_1);
				s->Result();
				Hop* h = new Hop();
				h->setHop(b_17_2);
				h->Result();
				Big* b = new Big();
				b->setBig(b_17_3);
				b->Result();
				Pale* p = new Pale();
				p->setPale(b_17_4);
				p->Result();
				Mocha* m = new Mocha();
				m->setMocha(b_17_5);
				m->Result();
				Goose* g = new Goose();
				g->setGoose(b_17_6);
				g->Result();
				Tap5* ta = new Tap5();
				ta->setTap5(b_17_7);
				ta->Result();
				Kozel* k = new Kozel();
				k->setKozel(b_17_8);
				k->Result();
				Blanc* bl = new Blanc();
				bl->setBlanc(b_17_9);
				bl->Result();
				cout << t << "번 테이블의 총 금액 : " << s->Final + h->Final + b->Final + p->Final + m->Final + g->Final + ta->Final + k->Final + bl->Final << endl << endl;
				delete s;
				delete h;
				delete b;
				delete p;
				delete m;
				delete g;
				delete ta;
				delete k;
				delete bl;
				break;
			}
				else
				{
					cout << "다시 입력해주세요.\n";
				}
			}
		}
		else if (m == 3)
		{
			break;
		}
		else
		{
			cout << "다시 입력해주세요.\n\n";
		}
	}
	return 0;
}