#include <iostream>
using namespace std;

int Get_Pivot(int _index[], int _left, int _right)
{
	int low, higt;
	int piovt = _left;

	low = piovt + 1;
	higt = _right;

	while (low <= higt)
	{
		if (_index[low] < _index[piovt])
		{
			low++;
		}

		if (_index[higt] > _index[piovt])
		{
			higt--;
		}

		if (low <= higt)
		{
			swap(_index[low], _index[higt]);
		}
	}

	swap(_index[piovt], _index[higt]);
	return higt;
}


void sort(int _index[], int _left, int _right)
{
	if (_left < _right)
	{
		int pivot = Get_Pivot(_index, _left, _right);

		sort(_index, _left, pivot - 1);
		sort(_index, pivot + 1, _right);
	}
}


int main()
{

#pragma region 퀵 정렬
	// 기준점을 획득한 다음 지군점을 기준으로 배열을 나누고 한 쪽에는
	// 기준점보다 작은 값들이 위치하게 한 다음, 다른 한쪽에는 기준점보다
	// 큰 값들이 위치하도록 합나다
	// 나누어진 하위 배열에 대해 재귀적으로 퀵 정렬을 호출하여
	// 모든 배열이 기본 배열이 될 때까지 반복하면서 정렬합니다.

	//int index[] = { 5,3,8,4,1,6,2,7 };
	int index[] = { 51,35,88,43,12,0,555,67,25,71,26,15,1,48,45,777 };
	int size = sizeof(index) / sizeof(int);
	sort(index, 0, size - 1);

	for (int i = 0; i < size; i++)
	{
		cout << index[i] << " ";
	}
#pragma endregion


	return 0;
}


