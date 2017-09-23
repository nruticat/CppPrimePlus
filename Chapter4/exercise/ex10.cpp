#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<double, 3> time;
	cout << "Enter the first time: ";
	(cin >> time[0]).get();
	cout << "Enter the second time: ";
	(cin >> time[1]).get();
	cout << "Enter the third time: ";
	(cin >> time[2]).get();
	cout << "\n\ntimes: "<<sizeof(time)/sizeof(time[0])
		<<"\nAverage time: " << (time[0] + time[1] + time[2]) / 3 << "s" << endl;
	cin.get();
	return 0;
}