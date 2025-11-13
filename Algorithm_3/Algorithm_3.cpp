
#include <iostream>
using namespace std;
int main()
{

#pragma region 인플레이스 정렬
	// 정렬 과정에서 추가저인 자료구조 또는 메모리 공간을 많이 사용하지 않고, 원래 주어진 배열이나 리스트 자체를 직접 수정하여 정렬하는 방식
#pragma endregion

#pragma region 버블 정렬
	// 서로 인접한 두원소를 비교하여 정렬하는 알고리즘입니다.
	int Index[10] = { 9,1,4,7,6,3,5,8,0,2 };
	int size = sizeof(Index) / sizeof(Index[0]);
	cout << size << endl;
	for (int i = 0; i < 10 - 1;i++)
	{
		for (int j = 0; j < 10 - i - 1;j++)
		{
			if (Index[j] > Index[j + 1])
			{
				int temp = Index[j];
				Index[j] = Index[j + 1];
				Index[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10;i++)
	{
		cout << Index[i] << " ";
	}








#pragma endregion
	return 0;
}

