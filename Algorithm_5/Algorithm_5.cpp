
#include <iostream>
using namespace std;
int main()
{

#pragma region 삽입 정렬
	int index[] = { 4,7,8,1,2,3,6,9,5 };
	int size = sizeof(index) / sizeof(int);

	for (int i = 1; i < size; i++)
	{
		int key = index[i];
		int j = i - 1;

		while (j >= 0 && index[j] > key)
		{
			index[j + 1] = index[j];
			j--;
		}
		index[j + 1] = key;
	}


	for (int i = 0; i < size; i++)
	{
		cout << index[i] << " ";
	}


#pragma endregion
	return 0;
}


