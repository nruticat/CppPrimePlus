#include <iostream>
using namespace std;
const int strsize = 30;
struct bop
{
	char fullname[strsize];
	char title[strsize];
	char bopname[strsize];
	int preference;
};

int main()
{
	char user;
	bop member[5]=
	{
		{"Wimp Macho","NULL","NULL",0},
		{"Raki Rhodes","Junior Programmer","NULL",1},
		{"Celia Laiter","NULL","MIPS",2},
		{"Hoppy Hipman","Analyst Trainee","NULL",1},
		{"Pat Hand","NULL","LOOPY",2}
	};
	int flag = 1;
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name             b. display by title" << endl;
	cout << "c. display by bopname          d.siplay by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice: ";
	cin >> user;
	while (flag)
	{
		switch (user)
		{
		case 'a' : 
			for (int i = 0; i < 5; i++)
				cout << member[i].fullname << endl;
			flag = 1;
			break;
		case 'b' :
			for (int i = 0; i < 5; i++)
				cout << member[i].title << endl;
			flag = 1;
			break;
		case 'c' :
			for (int i = 0; i < 5; i++)
				cout << member[i].bopname << endl;
			flag = 1;
			break;
		case 'd' :
			for (int i = 0; i < 5; i++)
			{
				switch (member[i].preference)
				{
				case 0 : cout << member[i].fullname << endl; break;
				case 1 : cout << member[i].title << endl; break;
				case 2 : cout << member[i].bopname << endl; break;
				default: cout << "preference error!" << endl; break;
				}
			}
			break;
		case 'q' :
			flag = 0;
			break;
		default:
			cout << "Error input!" << endl;
			break;
		}
		if (flag)
		{
			cout << "Next choice: ";
			cin >> user;
		}
	}
	cout << "Bye!" << endl;
	system("pause");
	return 0;
}