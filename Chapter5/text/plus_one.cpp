// plus_one.cpp -- the increment operator
#include <iostream> 
int main()
{
	using namespace std;
	int a = 20;
	int b = 20;
	cout << "a = " << a << ": b = " << b << "\n";
	cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
	cout << "a = " << a << ": b = " << b << "\n";
	cin.get();
	return 0;
}