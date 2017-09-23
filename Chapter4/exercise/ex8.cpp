#include <iostream>
#include <string>
using namespace std;
struct PizzaAnalyze
{
	string Name;
	double diameter;
	double weight;
};

int main()
{
	cout << "Enter the diameter: ";
	PizzaAnalyze *OnePizza = new PizzaAnalyze;
	(cin>> OnePizza->diameter).get();
	cout << "Enter the name: ";
	getline(cin, OnePizza->Name);
	cout << "Enter the weight: ";
	(cin >> OnePizza->weight).get();
	cout << "\n\n\nName: " << OnePizza->Name
		<< "\ndiameter: " << OnePizza->diameter
		<< "\nweight: " << OnePizza->weight;
	delete OnePizza;
	cin.get();
	return 0;
}