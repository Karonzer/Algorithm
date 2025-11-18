#include <iostream>
#include <map>
using namespace std;

int main()
{

#pragma region 계수 정렬
	// 데이터의 값을 비교하지 않고 각 원소에 데이터가
	// 몇 개 있는 지 개수를 세어 저장한 다음 정렬하는 알고리즘
	// 시간 복잡도 O(n + k) 
	// 정수 범위 가 제한 되어 있을 때 사용 가능한 알고리즘

	int index[] = { 6,5,1,1,3,1,2,3,4,4,2,5 };
	int size = sizeof(index) / sizeof(int);
	map<int, int> map;
	for (int i = 0; i < size;i++)
	{
		map[index[i]] += 1;
	}


	for (auto& p : map) {
		for (int i = 0; i < p.second;i++)
		{
			cout << p.first << " ";
		}
	}

#pragma endregion
	return 0;
}


