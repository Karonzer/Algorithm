#include <iostream>
#include <vector>
using namespace std;

#define INFINITY 1000000

class Dijkstra
{
private:
	vector<vector<int>> procession;

	vector<bool> visited;
	vector<int> distance;

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
			procession[i].resize(newSize, INFINITY);
		}

		for (int i = 0; i < procession.size();i++)
		{
			procession[i][i] = 0;
		}

		visited.resize(newSize, false);
		distance.resize(newSize, INFINITY);
	}

	void update(int _start)
	{
		visited[_start] = true;
		for (int i = 1; i < procession.size();i++)
		{
			distance[i] = procession[_start][i];
		}

		for (int i = 1; i < procession.size();i++)
		{
			int index = find();
			visited[index] = true;
			for (int j = 1; j < procession.size();j++)
			{
				if (visited[j] || procession[index][j] == INFINITY)
					continue;

				int newdis = distance[index] + procession[index][j];

				if (newdis < distance[j])
				{
					distance[j] = newdis;
				}
			}
		}

		for (int i = 1; i < distance.size(); i++)
			cout << distance[i] << " ";
	}

	const int& find()
	{
		int min = INFINITY;
		int index = 0;

		for (int i = 1; i < procession.size();i++)
		{
			if (visited[i])
				continue;

			if (min > distance[i])
			{
				min = distance[i];
				index = i;
			}
		}

		return index;
	}

	void Print()
	{
		for (int i = 1; i < procession.size();i++)
		{
			for (int j = 1; j < procession.size();j++)
			{
				cout << procession[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main()
{

#pragma region 다익스트라 알고리즘
	// 시작점으로 부터 모든 노드까지의 최소 거리를 구해주는
	// 알고리즘 입니다,

	//1 거리 배열에서 weight[시작노드]의 값들로 초기화합니다
	//2 시작점을 방문 처리합니다.
	//3 거리 배열에서 최소 비용 노드를 찾고 방문 처리합니다
	//4 최소 비용 노드를 거쳐갈 지 고민해서 거리 배열을 갱신합니다
	//5 모든 노들 방문할 때까지 3번 ~ 4번을 반복합니다.
	// 방문하지 않은 노드 중에서 가장 작은 거리를 가진 노드를
	// 방문하고 그 노드와 연결된 다른 노드까지의 거리를 계산합니다.
	Dijkstra dijkstra;

	dijkstra.insert(1, 2, 2);
	dijkstra.insert(1, 3, 5);
	dijkstra.insert(1, 4, 1);

	dijkstra.insert(2, 3, 3);
	dijkstra.insert(2, 4, 2);

	dijkstra.insert(3, 4, 3);
	dijkstra.insert(3, 5, 1);
	dijkstra.insert(3, 6, 5);

	dijkstra.insert(4, 5, 1);

	dijkstra.insert(5, 6, 2);

	dijkstra.update(1);

#pragma endregion


	return 0;
}


