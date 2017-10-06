#include <iostream>
#include <string>
using namespace std;
int main()
{
	string word;
	int num = 0;
	cout << "Enter words (to stop, type the word done):" << endl;
	cin >> word;
	while (word!="done")
	{
		if (bool(cin >> word) == true)
		{
			num++;
		}
	}
	cout << "You entered a total of " << num << " words." << endl;
	system("pause");
	return 0;
}
