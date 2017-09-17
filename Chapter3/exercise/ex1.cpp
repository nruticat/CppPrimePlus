#include <iostream>
using namespace std;
int main()
{
	int height;
	const int exchange = 12;
	cout << "\aPlease input your height(in) : __________\b\b\b\b\b\b\b\b\b\b";
	cin >> height;
	cin.get();
	cout << height << " in(s) is " << height / exchange << " ft(s) and ";
	cout << height % exchange << " in(s)." << endl;
	cin.get();
	return 0;
}