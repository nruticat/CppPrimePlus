#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
	char filename[60];
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, 60);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating." << endl;
		exit(EXIT_FAILURE);
	}
	long count = 0;
	char ch;
	inFile >> ch;
	while (inFile.good())
	{
		count++;
		inFile >> ch;
	}
	cout << count << endl;
	system("pause");
	return 0;
}