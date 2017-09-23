#include <iostream>
#include <string>
using namespace std;

struct CandyBar
{
	string name;
	float weight;
	int calorie;
}snack[3]=
{
	{"Mocha Munch 0",2.3,350},
	{"Mocha Munch 1",2.4,450},
	{"Mocha Munch 2",2.5,550}
};

int main()
{
	cout << "This is snack[0]" << endl;
	cout << "Name: " << snack[0].name << "\nWeight: " 
		<< snack[0].weight << "\nCalorie: " << snack[0].calorie<<"\n\n";
	cout << "This is snack[1]" << endl;
	cout << "Name: " << snack[1].name << "\nWeight: "
		<< snack[1].weight << "\nCalorie: " << snack[1].calorie<<"\n\n";
	cout << "This is snack[2]" << endl;
	cout << "Name: " << snack[2].name << "\nWeight: "
		<< snack[2].weight << "\nCalorie: " << snack[2].calorie;
	cin.get();
	return 0;
}