#include <iostream>
using namespace std;
int main()
{
	float oil;
	cout << "Input the fuel consumption per 100 kilometers: ";
	cin >> oil;
	cin.get();
	cout << oil << "/100km = " << 62.14 / (oil/3.875) <<" mpg" << endl;
	cin.get();
	return 0;
}