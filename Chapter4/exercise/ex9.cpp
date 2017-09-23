#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string name;
	double weight;
	int calorie;
};

int main()
{
	CandyBar *snack = new CandyBar[3];
	snack[0] = { "Mocha Munch 0",2.3,350 };
	snack[1] = { "Mocha Munch 1",2.4,450 };
	snack[2] = { "Mocha Munch 2",2.5,550 };
	cout << "This is snack[0]" << endl;
	cout << "Name: " << snack->name << "\nWeight: "
		<< snack->name << "\nCalorie: " << snack->calorie << "\n\n";
	snack = snack + 1;
	cout << "This is snack[1]" << endl;
	cout << "Name: " << snack->name << "\nWeight: "
		<< snack->weight << "\nCalorie: " << snack->calorie << "\n\n";
	cout << "This is snack[2]" << endl;
	snack = snack + 1;
	cout << "Name: " << snack->name << "\nWeight: "
		<< snack->weight << "\nCalorie: " << snack->calorie;
	snack = snack - 2;
	delete [] snack;
	cin.get();
	return 0;
}