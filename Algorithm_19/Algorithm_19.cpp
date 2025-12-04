#include <iostream>
using namespace std;

void Shellsort(int _list[], int _size)
{
	int gap = _size;
	int temp = 0;

	while (gap >= 1)
	{
		gap = gap / 2;
		for (int i = gap; i < _size; i++)
		{
			temp = _list[i];
			int j = 0;
			for (j = i - gap; j >= 0 && _list[j] > temp; j -= gap)
			{
				_list[j + gap] = _list[j];
			}
			_list[j + gap] = temp;
		}

	}


	for (int i = 0; i < _size; i++)
	{
		cout << _list[i] << " ";
	}
	cout << endl;




}


int main()
{

#pragma region 쉘 정렬
	// 리스트를 일정한 각ㄴ격에 따라 나누고 각 부분 리스트를 삽입 정렬을 통해
	// 정렬하는 방법입니다.

	// 1. 초기 시작 간격을 설정합니다.

	// 2. 간격 단위로 그룹을 묶어서 리스트를 나눕니다.

	// 3 각 그룹의 n 번째 원소들끼리 삽입 정렬을 수행합니다.

	// 4 간격의 크기를 반으로 줄입니다.

	// 5 간격이 1이 될 때까지 2번부터 반복합니다.

	int list[] = { 14,25,21,8,36,57,32,19 ,17 };
	int size = sizeof(list) / sizeof(int);


	Shellsort(list, size);




#pragma endregion


	return 0;
}


