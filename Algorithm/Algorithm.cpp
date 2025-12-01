#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

#define INFINITY = 1000000;

class Dijkstra
{
private:
	vector<vector<int>> procession;
public:

	void insert(int _i, int _j, int _weight)
	{
		int maxNode = max(_i, _j);
		if (procession.size() <= maxNode)
		{
			reSize(maxNode);
		}

		procession[_i][_j] = _weight;
		procession[_j][_i] = _weight;

	}

	void reSize(int _node)
	{
		int newSize = _node + 1;
		procession.resize(newSize);
		for (int i = 0; i < procession.size();i++)
		{
			procession[i].resize(newSize);
		}
	}
};

int main()
{

#pragma region 다이스트라 알고리즘
	Dijkstra dijkstra;

	dijkstra.insert(1, 2, 2);
#pragma endregion


	return 0;
}


