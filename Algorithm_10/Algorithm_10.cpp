#include <iostream>
using namespace std;

int Find(int _index[], int _left, int _right, int _findValue)
{
	if (_left > _right)
	{
		return 0;
	}
	else
	{
		int mid = (_left + _right) / 2;

		if (_index[mid] == _findValue)
		{
			return _index[mid];
		}
		else if (_index[mid] > _findValue)
		{
			_right = mid - 1;
			return Find(_index, _left, _right, _findValue);

		}
		else
		{
			_left = mid + 1;
			return Find(_index, _left, _right, _findValue);
		}

	}
	return 0;
}

int main()
{

#pragma region 이분 탐색
	// 탐색 범위를 반으로 나누어 찾는 값을 포함하는 범위를 
	// 좁혀나가는 방식으로 동작하는 알고리즘

	int index[] = { 5,6,11,13,27,55,66,92,102,156,287,561 };
	int size = sizeof(index) / sizeof(int);

	int left = 0;
	int right = size - 1;

	int find = Find(index, left, right, 561);
	cout << find << endl;



#pragma endregion


	return 0;
}


