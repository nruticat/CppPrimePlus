//enum.cpp -- using enum
#include <iostream>
enum{red,orange,yellow,green,blue,violet,indigo};

int main()
{
	using namespace std;
	cout << "Enter color code (0-6): ";
	int code;
	(cin >> code).get();
	while (code >= red && code <= indigo)
	{
		switch (code)
		{
		case red:cout << "Her lips were red.\n"; break;
		case orange:cout << "Her hair was orange.\n"; break;
		case yellow:cout << "Her shoes were yellow.\n"; break;
		case green:cout << "Her nail were green.\n"; break;
		case blue:cout << "Her sweatsuit was blue.\n"; break;
		case violet:cout << "Her eye were violet.\n"; break;
		case indigo:cout << "Her mood was indigo.\n"; break;
		default:
			break;
		}
		cout << "Enter color code (0-6):";
		(cin >> code).get();
	}
	cout << "Bye\n";
	system("pause");
	return 0;
}