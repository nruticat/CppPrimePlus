#include <iostream> 
using namespace std;

int main()
{
	long sum = 0;
	int num;
	do
	{
		cout << "Please input number(0 for stop) : ";
		(cin >> num).get();
		sum += num;
	} while (num != 0);
	cout << "\n\n\nSUM = " << sum;
	cin.get();
	return 0;
}