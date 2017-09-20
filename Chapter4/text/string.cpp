//string.cpp -- stroing strings in an array
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	const int Size = 15;
	char name1[Size];
	char name2[Size]="C++owboy";
	cout << "Howdy! I'm " << name2;
	cout << " ! What's your name?\n";
	cin >> name1;
	cin.get();
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << " in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	cin.get();
	return 0;
}