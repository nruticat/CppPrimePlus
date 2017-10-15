//condit.cpp -- using the conditional operator
#include <iostream> 
int main()
{
	using namespace std;
	int a, b;
	cout << "Error two integers: ";
	(cin >> a >> b).get();
	cout << "The larger of " << a << " and " << b;
	int c = a > b ? a : b;
	cout << " is " << c << endl;
	system("pause");
	return 0;
}