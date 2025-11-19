#include <iostream>

using namespace std;

int max(int _list[], int _left, int _right)
{
	if (_left != _right)
	{
		int size = (_left + _right) / 2;
		int leftvalue = max(_list, _left, size);
		int rightvalue = max(_list, size + 1, _right);

		if (leftvalue > rightvalue)
		{
			return leftvalue;
		}
		else
		{
			return rightvalue;
		}
	}
	else
	{
		return _list[_left];
	}

}

int main()
{

#pragma region 분할 정복
	// 주어진 2개 이상의 부분으로 문제를 나눈 뒤 각 부분
	// 문제에 대한 답을 재귀로 호출하여 계산한 다음
	// 답으로 부터 전체 문제의 답을 계산하는 알고리즘

	// 분할(divide) : 주어진 문제를 두 개 홍은 그 이상의 형식으로 나눈다

	// 정복(conquer) : 나누어진 문제를 재귀적으로 해결해서 나누어진 문제를 
	// 더 이상 나누어서 문제가 필요 없을 때까지 계속 분할합니다.

	// 통합 (combine) : 나누어서 해결한 문제를을 통햅해서 원래 문제의 해답을 생성합니다.

	int index[] = { 20,15,99,1,125,52,0,251,2,8,7,999,75,1200,750 };
	int size = sizeof(index) / sizeof(int);
	int left = 0;
	int right = size;
	int count = max(index, left, right - 1);

	cout << count << endl;


#pragma endregion
	return 0;
}


