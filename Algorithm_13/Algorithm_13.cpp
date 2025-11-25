#include <iostream>
#include <vector>
using namespace std;

unsigned int fibonaci(int _n, int _list[])
{
	if (_n <= 1)
	{
		return _n;
	}
	else
	{
		if (_list[_n] > 0)
		{
			return _list[_n];
		}
		else
		{
			return _list[_n] = fibonaci(_n - 1, _list) + fibonaci(_n - 2, _list);
		}
	}
}




int main()
{

#pragma region 동적 계획법
	// 하나의 큰 문제를 여러개의 작은 문제로 나누어서 그결과를
	// 저장하여 다시 큰 문제를 해결할 때 사용하는 알고리즘입니다

	// 겹치는 부분 문제
	// 동일한 작은 문제들이 반복하여 나타나는 경우를 의미합니다.

	// 최적 부분 구조 
	// 부분 문제의 최적 결과 값을 사용하여 전체 문제의 최적의
	// 결과를 낼 수 있는 경우를 의미합니다.

	// 메모이제이션
	// 프로그램이 동일한 계산을 반복해야 할 때 이전에 계산한 값을
	// 메모미에 저장함으로써 동일한 계산을 반복 수행하는 작업을
	// 제거하여 프로그램의 실행 속도를 항상 시키는 방법입니다.

	int size = 100;
	int index[100 + 1] = { 0 };
	index[0] = 0;
	index[1] = 1;


	for (int i = 0; i < size;i++)
	{
		cout << fibonaci(i, index) << " ";
	}





#pragma endregion


	return 0;
}


