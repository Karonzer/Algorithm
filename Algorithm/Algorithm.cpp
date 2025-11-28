#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

template<typename T>
class Graph
{
private:
	unordered_set<T> vertices;
	unordered_map<T, vector<T>> list;
	unordered_map<T, int> degree;

public:
	void insert(const T _i, const T _j)
	{
		list[_i].push_back(_j);
		degree[_j] += 1;

		vertices.insert(_i);
		vertices.insert(_j);

		if (!degree.count(_i))
		{
			degree[_i] = 0;
		}
	}

	void Sort()
	{
		queue<T> temp;
		int count = 0;
		for (auto value : degree)
		{
			if (value.second == 0)
			{
				temp.push(value.first);
			}
		}

		if(temp.empty())
		{
			cout << "a cycle has occurrend" << endl;
		}

		while (!temp.empty())
		{
			T value = temp.front();
			temp.pop();

			cout << value << " ";
			count += 1;

			for (int i = 0;i < list[value].size();i++)
			{
				degree[list[value][i]] -= 1;
				if (degree[list[value][i]] == 0)
				{
					temp.push(list[value][i]);
				}
			}
		}


		if (count != vertices.size())
		{
			cout << "a cycle has occurrend" << endl;
		}


	}
};


int main()
{

#pragma region 위상정렬
	// 병합 그래프에 존재하는 각 정점들의 선행 순서를 지키며
	// 모든 정점을 차례대로 진행하는 방식의 정렬입니다.
	// 사이클이 발생하는 경우 위상 정렬을 수행할 수 없습니다.

	//DAG  : 사이클이 존재하지 않는 그래프

	// 시간 복잡도 : 0(V + E)
	// 위상정렬하는 방법
	//1. 진입 차수가 0인 정점을 queue에 삽입합니다.

	//2 queue에서 원소를 꺼내 연결된 모든 간선을 제거합니다.

	//3. 간선 제거 이후에 진입 차수가 0이 된 정점을 queue에 삽입합니다.

	//4. queue가 비었을때까지 2번 ~ 3번 작업을 반복적으로 수행합나다.

	//진입 차수

	Graph<int> graph;

	graph.insert(1, 2);
	graph.insert(1, 5);

	graph.insert(2, 3);

	graph.insert(3, 4);

	graph.insert(4, 6);

	graph.insert(5, 6);

	graph.insert(6, 7);


	graph.Sort();

#pragma endregion


	return 0;
}


