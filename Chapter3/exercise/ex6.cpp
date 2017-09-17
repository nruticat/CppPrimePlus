#include <iostream>
using namespace std;
int main()
{
	int flag;
	double length, oil;
	cout << "1！！mile,gallon\n2！！kilometers,litre" << endl;
	cout << "What kind of measurement would you like to use? ";
	cin >> flag;
	cin.get();
	switch (flag)
	{
	case 1:
		cout << "Please input mileage(miles): ";
		cin >> length;
		cin.get();
		cout << "Please input gasoline usage(gallon): ";
		cin >> oil;
		cin.get();
		cout << "1 gallon = " << length / oil << " miles." << endl;
		break;
	case 2:
		cout << "Please input mileage(kms): ";
		cin >> length;
		cin.get();
		cout << "Please input gasoline usage(litre): ";
		cin >> oil;
		cin.get();
		cout << "100 kms = " << oil /length * 100 << " litres." << endl;
		break;
	default:
		cout << "Error!" << endl;
		break;
	}
	cin.get();
	return 0;
}