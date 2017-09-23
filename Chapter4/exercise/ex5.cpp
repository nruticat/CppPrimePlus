#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
	string name;
	float weight;
	int calorie;
}snack =
{
	"Mocha Munch",
	2.3,
	350
};

int main()
{
	cout << "Name: " << snack.name << endl;
	cout << "weight: " << snack.weight << endl;
	cout << "calorie: " << snack.calorie << endl;
	cin.get();
	return 0;
}