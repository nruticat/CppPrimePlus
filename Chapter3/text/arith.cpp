//arith.cpp -- some C++ arithmetic
#include <iostream>
using namespace std;
int main()
{
	float hats, heads;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;
	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	cin.get();
	cin.get();
	return 0;
}