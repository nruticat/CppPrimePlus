#include <iostream> 
#include <string>
using namespace std;

struct patron
{
	string name;
	double money;
};

int main()
{
	int people, count;
	cout << "Please input the number of patrons: ";
	(cin >> people).get();

	patron *record = new patron[people];
	for (int i = 0; i < people; i++)
	{
		cout << "No. " << i + 1 << "\tName: ";
		getline(cin, record[i].name);
		cout << "Patron: ";
		(cin >> record[i].money).get();
	}
	count = 0;
	cout << "\n\n\n\tGrand Patrons" << endl;
	for (int i = 0; i < people; i++)
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
	for (int i = 0; i < people; i++)
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
	system("pause");
	return 0;

}