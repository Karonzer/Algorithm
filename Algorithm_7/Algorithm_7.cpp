
#include <iostream>

using namespace std;

void sieve(int n)
{
	//bool* boollist = new bool[n + 1];

	//for (int i = 2; i <= n;i++)
	//{
	//	boollist[i] = true;
	//}


	//for (int i = 2; i <= n;i++)
	//{
	//	if (!boollist[i])
	//	{
	//		continue;
	//	}



	//	for (int j = i * i; j <= n; j += i) 
	//	{
	//		boollist[j] = false;
	//	}

	//}

	//for (int i = 2; i<= n;i++)
	//{
	//	if (boollist[i])
	//	{
	//		cout << i << " ";
	//	}
	//}


	//delete[] boollist;

	bool* isPrime = new bool[n + 1];

	for (int i = 2; i <= n; i++)
		isPrime[i] = true;

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
		{
			// i의 배수 제거
			for (int j = i * 2; j <= n; j += i)
				isPrime[j] = false;
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (isPrime[i])
			cout << i << " ";
	}

	delete[] isPrime;

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


