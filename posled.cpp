// posled.cpp: определяет точку входа для консольного приложения.
//
#include <cstdio>
#include <iostream>
using namespace std;

long long posled(long long N)
{
	bool Mass[10] = { 0,0,0,0,0,0,0,0,0,0 };
	int i = 0;
	int j = 0;
	long long k;
	while (i<10)
	{
		++j;
		k = N*j;
		while (k != 0)
		{
			int a = k % 10;
			if (Mass[a] == false)
			{
				Mass[a] = true;
				i++;
			}
			k /= 10;
		}
	}
	return N*j;
}

void test(long long n)
{
	int i = 0;
	if (n != 0)

		{
			cout <<n<< " "  <<posled(n) << " poslednee chislo posled " << endl;

		}
	else
		cout <<n<< " net chisla na kotorom posled zakonchilas" << endl;
}


void main()
{
	test(1692);
	test(0);
	test(1);
	test(2);
	test(10);
	test(111);
	getchar();
}