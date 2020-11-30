//simple recursion
#include <iostream>
using namespace std;

int factorial(int val)
{
	if (val > 1)  return val* factorial(val - 1);
	if (val < 0) return 0;
	if (val == 0) return 1;
}

int main()
{
	cout << factorial(5);
	return 0;
}