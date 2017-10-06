#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char word[20];
	int num = 0;
	cout << "Enter words (to stop, type the word done):" << endl;
	cin >> word;
	while (strcmp(word, "done") != 0)
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
