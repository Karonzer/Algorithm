#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>;
#include <unordered_set>

using namespace std;

template<typename T>
class Graph
{
private:
	unordered_map<T, vector<T>> root;


public:
	void insert(const T _i, const T _j)
	{
		root[_i].push_back(_j);
		root[_j].push_back(_i);
	}

	void search(const T _start)
	{
		unordered_set<T> visited;
		queue<T> list;

		visited.insert(_start);
		list.push(_start);
		cout << _start << " ";


		while (!list.empty())
		{
			T temp = list.front();
			list.pop();

			for (int i = 0; i < root[temp].size();i++)
			{
				if (visited.find(root[temp][i]) == visited.end())
				{
					cout << root[temp][i] << " ";
					visited.insert(root[temp][i]);
					list.push(root[temp][i]);
				}

			}

		}
	}
};
int main()
{

#pragma region BFS 너비 우선 탐색
	// 하나의 시작 정점을 방문한 후 시작 정점에 인접한
	// 모든 정점들을 우선적으로 방문하는 탐색입니다


#pragma endregion

	Graph<const char*> graph;
	graph.insert("A", "B");
	graph.insert("A", "C");

	graph.insert("B", "D");
	graph.insert("B", "E");

	graph.insert("C", "F");
	graph.insert("C", "G");

	graph.search("A");


	return 0;
}


