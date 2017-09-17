#include <iostream>
using namespace std;
int main()
{
	const int change1 = 60, change2 = 24;
	long long second;
	int day, hour, min, sec;
	cout << "Enter the number of seconds: ";
	cin >> second;
	cin.get();
	day = second / change1 / change1 / change2;
	sec = second - day*change1*change1*change2;
	hour = sec / change1 / change1;
	sec = sec - hour*change1*change1;
	min = sec / change1;
	sec = sec - min*change1;
	cout << second << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes, " << sec << " seconds" << endl;
	cin.get();
	return 0;
}