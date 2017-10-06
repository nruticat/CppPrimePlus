#include <iostream>
#include <string>
using namespace std;

int main()
{
	string mon[] = { "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec" };
	int sale[12][3];
	long sum[3] = { 0,0,0 };
	for (int i = 0; i < 3; i++)
	{
		cout << "\n" << i+1 << " year:" << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << mon[j] << "'s sales: ";
			(cin >> sale[j][i]).get();
			sum[i] += sale[j][i];
		}
	}
	cout << "\n\n\nFirst year sale: " << sum[0]
		<< "\nSecond years sale: " << sum[1]
		<< "\nThird years sale: " << sum[2] << endl;
	cin.get();
	return 0;
}