#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
using namespace std;

struct patron
{
	char name[50];
	double money;
};

int main()
{
	char filename[60];
	int num = 0;
	ifstream inFile;
	cout << "Enter name of data file: ";
	cin.getline(filename, 60);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		cout << "Filename Error" << endl;
		cout << "Program exit." << endl;
		exit(EXIT_FAILURE);
	}

	inFile >> num;
	inFile.get();
	patron *record = new patron[num];
	for (int i = 0; i < num; i++)
	{
		inFile.getline(record[i].name,50);
		inFile >> record[i].money;
		inFile.get();
	}
	int count = 0;
	cout << "\n\n\n\tGrand Patrons" << endl;
	for (int i = 0; i < num; i++)
	{
		if (record[i].money > 10000)
		{
			cout << record[i].name << "\t\t\t" << record[i].money << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "none" << endl;

	count = 0;
	cout << "\n\tPatrons" << endl;
	for (int i = 0; i < num; i++)
	{
		if (record[i].money <= 10000)
		{
			cout << record[i].name << "\t\t\t" << record[i].money << endl;
			count++;
		}
	}
	if (count == 0)
		cout << "none" << endl;
	delete[] record;
	inFile.close();
	system("pause");
	return 0;
}