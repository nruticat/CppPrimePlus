// newstrct.cpp -- using new with a structure
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable *ps = new inflatable;
	cout << "Enter name of inflatable item: ";
	(cin.get(ps->name, 20)).get();
	cout << "Enter volume in cubic feet: ";
	(cin >> (*ps).volume).get();
	cout << "Enter price: $";
	(cin >> ps->price).get();
	cout << "Name : " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << " cubic feet\n";
	cout << "Price :$" << ps->price << endl;
	delete ps;
	cin.get();
	return 0;
}