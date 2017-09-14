//convert.cpp -- converts stone to pounds
#include <iostream>
int stonelib(int);
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	cin.get();
	int pounds = stonelib(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	cin.get();
	return 0;
}

int stonelib(int sts)
{
	return 14 * sts;
}