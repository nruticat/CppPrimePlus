// address.cpp -- using the & operator to find address
#include <iostream>
using namespace std;
int main()
{
	int donuts = 6;
	double cups = 4.5;
	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;
	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
	cin.get();
	return 0;
}