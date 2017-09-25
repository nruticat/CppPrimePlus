// express.cpp -- values of expressions
#include <iostream> 
int main()
{
	using namespace std;
	int x;

	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "Now x = " << x << endl;
	cout << "The experssion x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cout.setf(ios_base::boolalpha);
	cout << "The expression x < 3 has the vlaue ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	cin.get();
	return 0;
}