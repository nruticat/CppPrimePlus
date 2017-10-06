#include <iostream>
using namespace std;
int main()
{
	int a, b,sum=0;
	cout << "Please input start number: ";
	(cin >> a).get();
	cout << "Please input end number: ";
	(cin >> b).get();
	for (int i = a; i <= b; i++)
		sum += i;
	cout << "Sum from " << a << " to " << b << " is " << sum << endl;
	cin.get();
	return 0;
}