#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Enter words (q to quit):" << endl;
	char ch[20];
	int vowel = 0, consonant = 0, other = 0;
	while (cin>>ch)
	{
		if (isalpha(ch[0]))
		{
			if (ch[0] == 'q' && strlen(ch) == 1)
				break;
			else
			{
				switch (ch[0])
				{
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U':
					vowel++;
					break;
				default:
					consonant++;
					break;
				}
			}
		}
		else
			other++;
	}
	cout << vowel << " words beginning with vowels" << endl;
	cout << consonant << " words beginning with consonants" << endl;
	cout << other << " others" << endl;
	system("pause");
	return 0;
}