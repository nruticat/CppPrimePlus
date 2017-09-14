#include <iostream>
using namespace std;
int main()
{
	cout << "Please input the long: ";
	double length;
	cin >> length;
	cin.get();
	cout << endl;
	cout << length << " long = " << length * 220 << " ma" << endl;
	cin.get();
	return 0;
}