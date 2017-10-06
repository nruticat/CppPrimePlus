#include <iostream> 
using namespace std;

int main()
{
	cout << "Enter number of rosw: ";
	int row;
	(cin >> row).get();
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= row; j++)
		{
			if (j <= row - i)
				cout << ". ";
			else
				cout << "* ";
		}
		cout << endl;
	}
	cin.get();
	return 0;
}