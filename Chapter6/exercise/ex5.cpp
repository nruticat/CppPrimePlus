#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	long money;
	int flag = 1;
	while (flag)
	{
		cout << "Please enter your income (tvarp): " ;
		cin >> money;
		if (money>0)
		{
			flag = 1;
			cout << "tax : ";
			if (money <= 5000)
				cout << "0 tvarp" << endl;
			else
			{
				if (money <= 15000)
					cout << 0.1*(money - 5000) << " tvarps" << endl;
				else
				{
					if (money <= 35000)
						cout << 1000 + (money - 15000)*0.15 << " tvarps" << endl;
					else
						cout << 4000 + (money - 35000)*0.2 << " tvarps" << endl;
				}
			}
		}
		else
			flag = 0;
	}
	cout << "Bye!" << endl;
	system("pause");
	return 0;
}