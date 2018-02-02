#include <iostream>
using namespace std;

int main()
{
	char user;
	int flag = 1;
	cout << "Please enter one of the following choices:" << endl;
	cout << "c) carnivore             p) pianist" << endl;
	cout << "t) tree             g) game" << endl;
	while (flag)
	{
		cout << "Please enter a c, p, t, or g: " ;
		cin >> user;
		switch (user)
		{
		case 'c': cout << "A maple is a tree." << endl; flag = 0; break;
		case 'p': cout << "A maple is a tree." << endl; flag = 0; break;
		case 't': cout << "A maple is a tree." << endl; flag = 0; break;
		case 'g': cout << "A maple is a tree." << endl; flag = 0; break;
		default: flag = 1; break;
		}

	}
	system("pause");
	return 0;
}