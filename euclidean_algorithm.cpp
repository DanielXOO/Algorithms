#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int find_max(int a, int b)
{
	int del;
	while (a > 0 && b > 0)
	{
		if (a > b) a = a % b;
		else b = b % a;
	}
	del = a + b;
	return del;
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << find_max(a, b);
	return 0;
}