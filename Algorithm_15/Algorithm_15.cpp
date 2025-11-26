#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;


template<typename T>
class Graph
{
private:
	unordered_map<T, vector<T>> root;
	unordered_set<T> visited;
public:
	Graph()
	{

	}

public:
	void insert(const T _i, const T _j)
	{
		root[_i].push_back(_j);
		root[_j].push_back(_i);
	}

	void search(const T _start)
	{
		if (auto check = visited.find(_start) == visited.end())
		{
			visited.insert(_start);
			cout << _start << " ";
			for (int i = 0; i < root[_start].size();i++)
			{
				search(root[_start][i]);
			}
		}
	}
};

int main()
{

#pragma region DFS
	// 깊이 우선 탐색
	// 그래프에서 한 방향으로 갈 수 있을 만큼 깊이 들어갔다가, 더 이상,
	// 갈 수 없으면 다시 돌아와서 다른 경로를 탐색하는 방법입니다,


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


