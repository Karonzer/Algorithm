
#include <iostream>
using namespace std;
int main()
{

#pragma region 선택 정렬
	// 주어진 리스트 중에 최소값을 찾은 다음 특정한 위치에서 결과를 교체하는 방식으로 정렬하는 알고리즘

	int index[] = { 4,7,8,1,2,3,6,9,5 };
	int size = sizeof(index) / sizeof(int);
	cout << size << endl;
	for (int i = 0; i < size;i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (index[min] > index[j])
			{
				min = j;
			}
		}

		swap(index[i], index[min]);
	}

	for (auto num : index)
	{
		cout << num << " ";
	}



#pragma endregion
	return 0;
}


