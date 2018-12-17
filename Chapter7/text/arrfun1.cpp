// arrfun1.cpp -- functions with an array argument
#include <bits\stdc++.h>
using namespace std;
const int ArSize = 8;
int sum_arr(int arr[], int n);
int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	// some systems require preceding int with static to enable array initialization

	int sum = sum_arr(cookies, ArSize);
	cout << "Total cookies eaten: " << sum << endl;
	system("pause");
	return 0;
}

//return the sum of an integer array
int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}