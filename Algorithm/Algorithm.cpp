
#include <iostream>

using namespace std;

void sieve(int n)
{
	int* list = new int[n];
	bool* boollist = new bool[n];

	for (int i = 0; i < n;i++)
	{
		list[i] = i + 1;
		boollist[i] = true;
	}

	list[0] = 0;

	for (int i = 1; i < n;i++)
	{
		if (!boollist[i])
		{
			continue;
		}

		int j = list[i] + list[i];
		int x = list[i];

		for (int j = list[i] * list[i]; j < n; j += list[i]) {
			cout << j << " ";
		}

	}

	//for (int i = 0; i < n;i++)
	//{
	//	cout << list[i] << " ";
	//}

	delete list;
	delete boollist;

}


int main()
{

#pragma region 에라토스테네스의 체
	//int index[] = { 0,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	//int size = sizeof(index) / sizeof(int);


	//for (int i = 1; i < size;i++)
	//{
	//	bool isPrime = true;


	//	for (int j = 2; j  < index[i]; j++) {
	//		if (index[i] % j == 0) 
	//		{
	//			isPrime = false;
	//			break;
	//		}
	//	}

	//	if (!isPrime)
	//	{
	//		index[i] = 0;
	//	}

	//}


	//for (auto a : index)
	//{
	//	cout << a << " ";
	//}

	sieve(50);

#pragma endregion
	return 0;
}


