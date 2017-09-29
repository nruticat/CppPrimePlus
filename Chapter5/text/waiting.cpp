// waiting.cpp -- using clock() in a time-delay loop
#include <iostream> 
#include <ctime>
using namespace std;

int main()
{
	cout << "Enter the delay time, in seconds: ";
	float secs;
	(cin >> secs).get();
	clock_t delay = secs*CLOCKS_PER_SEC;
	cout << "staring\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "Done\a\n";
	cin.get();
	return 0;
}