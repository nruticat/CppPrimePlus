#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const int ft_to_in = 12;
	const double in_to_m = 0.0254;
	const double kg_to_pd = 2.2;

	double h_in, h_ft, pd;
	cout << "Please input your height in X ft(s) and X in(s): ";
	cin >> h_in>>h_ft;
	cin.get();
	cout << "Please input your weight(pounds): ";
	cin >> pd;
	cin.get();
	cout << "BMI : " << pd / kg_to_pd / pow((h_ft*ft_to_in + h_in)*in_to_m,2) << endl;
	cin.get();
	return 0;
}