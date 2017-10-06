#include <iostream> 
using namespace std;

int main()
{
	double daphne, cleo;
	daphne = cleo = 100;
	int years = 0;
	while (daphne >= cleo)
	{
		daphne += 100 * 0.1;
		cleo *= 1.05;
		years++;
	}
	cout << "After " << years << " years, Cleo is richer than Daphne." << endl;
	cout << "And now, Daphne has " << daphne << " dollars, Cleo has " << cleo << " dollars." << endl;
	cin.get();
	return 0;
}