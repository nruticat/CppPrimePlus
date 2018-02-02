#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	double num[10], sum = 0, avg;
	int count = 0, bigger = 0;
	while (count<10 && cin >> num[count])
	{
		sum += num[count];
		count++;
	}
	avg = sum / count;
	for (int i = 0; i <= count; i++)
	{
		if (num[i] > avg)
			bigger++;
	}
	cout << "Avg of " <<count<<" numbers: "<< avg << endl;
	cout << bigger << " numbers bigger than the average." << endl;
	system("pause");
	return 0;
}