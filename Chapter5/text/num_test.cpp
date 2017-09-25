// num_test.cpp -- use numeric test in for loop
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the starting countdown value: ";
	int limit;
	(cin >> limit).get();
	int i;
	for ( i = limit	; i ; i--)
	{
		cout << "i = " << i << "\n";
	}
	cout << "Done now that i = " << i << endl;
	cin.get();
	return 0;
}