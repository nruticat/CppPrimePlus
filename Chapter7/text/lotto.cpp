// lotto.cpp -- probability of winning
#include <bits/stdc++.h>
// Notes: some implementations require double instead of long double
using namespace std;
long double probability(unsigned numbers, unsigned picks);
int main()
{
	double total, choices;
	cout << "Enter the local number of choices on the game card and\n"
		"the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "You have one chance in ";
		cout << probability(total, choices);
		cout << " of winning.\n";
		cout << "Next two number (q to quit): ";
	}
	cout << "bye\n";
	system("pause");
	return 0;
}

// the following function calculates the probability of picking picks
// numbers correctly from numbers choices
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;	// here come some local variables
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result*n / p;
	return result;
}