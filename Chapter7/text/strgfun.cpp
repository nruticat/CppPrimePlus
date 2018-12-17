// strgfun.cpp -- functions with a string argument
#include <bits\stdc++.h>
unsigned int c_in_str(const char *str, char ch);
using namespace std;
int main()
{
	char mmm[15] = "minimum";	//string in an array
	char *wail = "ululate";
	unsigned int ms = c_in_str(mmm, 'm');
	unsigned int us = c_in_str(wail, 'u');
	cout << ms << " m characters in " << mmm << endl;
	cout << us << " u characters in " << wail << endl;
	system("pause");
	return 0;
}

unsigned int c_in_str(const char *str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;
	}
	return count;
}