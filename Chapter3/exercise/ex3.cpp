#include <iostream>
using namespace std;
int main()
{
	const int exchange = 60;
	int deg, min, sec;
	cout << "Enter a latitude in degrees,minutes,and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> deg;
	cin.get();
	cout << "Next,enter the minutes of src: ";
	cin >> min;
	cin.get();
	cout << "Finally,enter the seconds of src: ";
	cin >> sec;
	cin.get();
	cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = ";
	cout << double(deg) + (double(min) + double(sec) / exchange) / exchange << " degrees" << endl;
	cin.get();
	return 0;
}