#include <iostream>
using namespace std;

void combine(int _list[], int _start, int _mid, int _end)
{
	int left = _start;
	int right = _mid + 1;
	int count = 0;
	int* container = new int[_end - _start + 1]();

	while (left <= _mid && right <= _end)
	{
		if (_list[left] < _list[right])
		{
			container[count++] = _list[left++];
		}
		else
		{
			container[count++] = _list[right++];
		}
	}


	while (left <= _mid)
	{
		container[count++] = _list[left++];
	}

	while (right <= _end)
	{
		container[count++] = _list[right++];
	}

	for (int i = _start;i <= _end;i++)
	{
		_list[i] = container[i - _start];
	}
	delete[] container;
}


void merge_sort(int _list[], int _start, int _end)
{
	if (_start != _end)
	{
		int mid = (_start + _end) / 2;
		merge_sort(_list, _start, mid);
		merge_sort(_list, mid+ 1 , _end);
		combine(_list, _start, mid, _end);
	}


}

int main()
{

#pragma region 합병 정렬

	int index[] = { 3,5,2,7,4,1,8,6 };
	int size = sizeof(index) / sizeof(int);
	merge_sort(index, 0, size - 1);
	
	for (int i = 0; i < size;i++)
	{
		cout << index[i] << " ";
	}

#pragma endregion

	
	return 0;
}


