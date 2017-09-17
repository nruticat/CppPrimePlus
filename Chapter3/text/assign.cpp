// assign.cpp -- type changes on initialization
#include <iostream>
using namespace std;
int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess(3.9832);
	int debt = 7.2E12;
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	cin.get();
	return 0;
}