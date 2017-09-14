#include <iostream>
float exchange(float f);
using namespace std;

int main()
{
	cout << "Please enter a Celsius value: ";
	float f;
	cin >> f;
	cin.get();
	exchange(f);
	cin.get();
	return 0;
}

float exchange(float f)
{
	cout << f << " degrees Celsius is " << 1.8*f + 32.0 << " degrees Fahrenheit." << endl;
	return 0;
}