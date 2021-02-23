#include <iostream>
#include <algorithm>

using namespace std;

bool binsearch(int val,const int* array, int right)
{
	int left = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (array[mid] == val) 
		{
			return true;
		}
		else if (array[mid] > val) 
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return false;
}

void arr_init(int* array, size_t sz)
{
	for (size_t counter = 0; counter < sz; counter++)
	{
		array[counter] = rand();
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
	int sz = 1000000;
	int* array = new int[sz];
	arr_init(array, sz);
	sort(array, array + sz);
	binsearch(12,array,sz);;
	return 0;
}