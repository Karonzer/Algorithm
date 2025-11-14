
#include <iostream>
#include <vector>
using namespace std;
int main()
{

#pragma region 유클리드 호제법
	//2개의 자연수 또는 정식의 최대 공약수를 구하는 방식으로
	// 두 수가 서로 상대방 수를 나누어서 원하는 수을 얻어내는 알고리즘

	int x = 24;
	int y = 36;

	int result = 0;
	for (int i = 1; i <= x && i <= y;i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			result = i;
		}
	}

	cout << result << endl;

	//vector<int> xlist;
	//vector<int> ylist;

	//for (int i = 1; i < x; i++)
	//{
	//	if ((x % i) == 0)
	//	{
	//		xlist.push_back(i);
	//	}
	//}

	//for (int i = 1; i < y; i++)
	//{
	//	if ((y % i) == 0)
	//	{
	//		ylist.push_back(i);
	//	}
	//}

	//int findIndex = 0;
	//for (int i = 0; i < xlist.size(); i++)
	//{
	//	for (int j = 0; j < ylist.size(); j++)
	//	{
	//		if (xlist[i] == ylist[j])
	//		{
	//			findIndex = xlist[i];
	//		}
	//	}
	//}



	//cout << findIndex << endl;

	//while (y != 0)
	//{
	//	int temp = x % y;
	//	x = y;
	//	y = temp;
	//}

	//cout << x << endl;



#pragma endregion
	return 0;
}


