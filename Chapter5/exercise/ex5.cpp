#include <iostream>
#include <string>
using namespace std;

int main()
{
	string mon[]= { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	int sale[12];
	long sum = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "Input " << mon[i] << "'s sale: ";
		(cin >> sale[i]).get();
		sum += sale[i];
	}
	cout << "\n\n\nsum = " << sum;
	cin.get();
	return 0;
}