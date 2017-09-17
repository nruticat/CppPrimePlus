// fltadd.cpp -- precision problems with float 
#include <iostream>
using namespace std;
int main()
{
	float a = 2.34E+22f;
	float b = a + 1.0f;
	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	cin.get();
	return 0;
}