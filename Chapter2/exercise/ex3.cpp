#include <iostream>
void mice();
void run();
using namespace std;

int main()
{
	mice();
	mice();
	run();
	run();
	cin.get();
	return 0;
}

void mice()
{
	cout << "Three blind mice" << endl;
}

void run()
{
	cout << "See how they run" << endl;
}