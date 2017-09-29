// dowhile.cpp -- exit-condition loop
#include <iostream> 
using namespace std;

int main()
{
	int n;
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "My favorite number\n";
	do
	{
		(cin >> n).get();
	} while (n != 7);
	cout << "Yes. 7 is my favorite.\n";
	cin.get();
	return 0;
}