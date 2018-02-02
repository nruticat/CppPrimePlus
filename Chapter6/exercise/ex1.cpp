#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char ch;
	while (cin >> ch && ch!='@')
	{
		if (isalpha(ch))
		{
			if (islower(ch))
				cout << (char)toupper(ch);
			else
				cout << (char)tolower(ch);
		}
		else
			cout << ch;
	}
	cout << endl;
	system("pause");
	return 0;
}