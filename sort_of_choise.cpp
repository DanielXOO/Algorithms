// sort of choise
#include <iostream>
using namespace std;

struct el_arr
{
	int val;
	size_t index;
};

size_t min_val(int* array, size_t sz, size_t loc)
{
	el_arr min_el;
	min_el.val = array[loc];
	min_el.index = loc;
	for (size_t idx = loc; idx < sz; idx++) 
	{
		if (min_el.val > array[idx])
		{
			min_el.val = array[idx];
			min_el.index = idx;
		}
	}
	return min_el.index;
}

void soc(int* array, size_t sz)
{

	for (size_t loc = 0; loc < sz; loc++)
	{
		swap(array[loc], array[min_val(array, sz, loc)]);
	}
}

void arr_init(int* array, size_t sz)
{
	for (size_t counter = 0; counter < sz; counter++)
	{
		array[counter] = rand() % 100;
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
	cout << "Input your array size: ";
	size_t sz;
	cin >> sz;
	int* array = new int[sz];
	arr_init(array, sz);
	arr_out(array, sz);
	cout << endl;
	soc(array, sz);
	arr_out(array, sz);
	return 0;
}