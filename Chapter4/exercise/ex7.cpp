#include <iostream>
#include <string>
using namespace std;

struct PizzaAnalyze
{
	string Name;
	double diameter;
	double weight;
}OnePizza;

int main()
{
	cout << "Enter the name: ";
	getline(cin, OnePizza.Name);
	cout << "Enter the diameter: ";
	(cin>>OnePizza.diameter).get();
	cout << "Enter the weight: ";
	(cin>> OnePizza.weight).get();
	cout << "\n\n\nName: " << OnePizza.Name
		<< "\nDiameter: " << OnePizza.diameter
		<< "\nWeight: " << OnePizza.weight;
	cin.get();
	return 0;
}