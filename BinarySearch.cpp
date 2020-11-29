//find num in array
#include <iostream>
#include <algorithm>
using namespace std;

bool binsearch(int val, int* array, size_t sz)
{
	int right = static_cast<int>(sz) - 1;
	int left = 0;
	bool result = false;
	int mid;
	while ((left <= right) || (result != true))
	{
		mid = (left + right) / 2;
		if (array[mid] == val) result = true;
		if (array[mid] > val) right = mid - 1;
		else left = mid + 1;
	}
	return result;
}

void arr_init(int* array, size_t sz)
{
	for (size_t counter = 0; counter < sz; counter++)
	{
		array[counter] = rand() % 10;
	}
}

void arr_out(int* array, size_t sz)
{
	for (size_t counter = 0; counter < sz; counter++)
	{
		cout << array[counter] << ' ';
	}
}


int main()
 {
	srand(time(0));
	cout << "input size of arr: ";
	size_t sz;
	cin >> sz;
	int* array = new int[sz];
	arr_init(array, sz);
	sort(array, array + sz);
	arr_out(array, sz);
	cout << endl;
	cout << "input your num: ";
	int num;
	cin >> num;
	cout << boolalpha << binsearch(num, array, sz);
	return 0;
}