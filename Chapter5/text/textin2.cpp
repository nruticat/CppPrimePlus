// textin2.cpp -- using cin.get(char)
#include <iostream> 
using namespace std;

int main()
{
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin.get(ch);
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cin.get();
	cout << endl << count << " characters read\n";
	cin.get();
	return 0;
}