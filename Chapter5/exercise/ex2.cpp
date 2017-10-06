#include <iostream> 
#include <array>
using namespace std;
const int ArSize = 100;

int main()
{
	array<long double,100> a;
	a[0] = a[1] = 1;
	for (int i = 2; i < ArSize ; i++)
		a[i] = i*a[i - 1];
	for (int i = 0; i < 16; i++)
		cout << i << "! = " << a[i] << endl;
	cout << 100 << "! = " << a[99];
	cin.get();
	return 0;
}