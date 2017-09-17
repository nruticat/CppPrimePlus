//modulus.cpp -- us % operator to convert lbs to stone
#include <iostream>
using namespace std;
int main()
{
	const int Lbs_per_stn = 14;
	int lbs;
	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	cin.get();
	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;
	cout << lbs << " pounds are " << stone
		<< " stone, " << pounds << " pound(s).\n";
	cin.get();
	return 0;
}