#include <iostream>
#include <vector>
using namespace std;

void combination(int _start, int _n, int _r, vector<int>& _vector)
{
	if (_vector.size() == _r)
	{
		for (auto value : _vector)
		{
			cout << value << " ";
		}
		cout << endl;
		return;
	}

	for (int i = _start; i <= _n; i++) {
		_vector.push_back(i);
		combination(i + 1, _n, _r, _vector);
		_vector.pop_back();
	}
}


int main()
{

#pragma region 퇴각 검색
	// 조건을 만족하는 한 계속 검사해 나가다, 조건ㅇ[ 부합하지 않는 순간
	// 탐색을 취소하고 이전 단계로 돌아온 뒤 탐색을 이어나가는 탐색입니다.

	// 1. 가지치기 (Pruning) 조건
	// 현재 상태가 앞으로 더 진행해도 정답이 될 가능성이 있는지 판단하는 조건입니다.

	//


	int n = 0;
	int r = 0;

	cin >> n;
	cout << endl;
	cin >> r;
	cout << endl;

	vector<int> container;

	combination(1, n, r, container);
#pragma endregion


	return 0;
}


