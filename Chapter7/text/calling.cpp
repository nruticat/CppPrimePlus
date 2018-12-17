// calling.cpp -- defining,prototyping, and calling a function
#include <iostream>
void simple();
using namespace std;

int main()
{
	cout << "main() will call the simple() function.\n";
	simple();
	cout << "main() is finished with the simple() function.\n";
	system("pause");
	return 0;
}

void simple()
{
	cout << "I'm but a simple funtion.\n";
}