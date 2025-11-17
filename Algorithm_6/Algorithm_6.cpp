
#include <iostream>
#include <vector>
using namespace std;

int function(int _x, int _y)
{
	//두 개의 자연수 x,y가 있을때
	// x와 y를 나눈 나머지를 r이라고 합니다

	//r이 0이라면 x와y의  최대 공약수가 y 됩니다

	// rd
	while (_y != 0)
	{
		int temp = _x % _y;
		_x = _y;
		_y = temp;
	}

	return _x;
}

int main()
{

#pragma region 유클리드 호제법
	//2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로
	// 두 수가 서로 상대방 수를 나누어서 원하는 수을 얻어내는 알고리즘

	int x = 18;
	int y = 3;

	//int result = 0;
	//for (int i = 1; i <= x && i <= y;i++)
	//{
	//	if (x % i == 0 && y % i == 0)
	//	{
	//		result = i;
	//	}
	//}

	//cout << result << endl;


	int index = function(x, y);

	cout << index << endl;



#pragma endregion
	return 0;
}


