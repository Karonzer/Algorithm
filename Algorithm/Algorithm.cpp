#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


template<typename T>
class Graph
{
private:
	vector<vector<T>> root;
public:
	Graph(int _size) : root(_size){}

public:
	void insert(const T _i, const T _j)
	{
		root[_i].push_back(_j);
	}
};

int main()
{

#pragma region DFS
	// 깊이 우선 탐색
	// 그래프에서 한 방향으로 갈 수 있을 만큼 깊이 들어갔다가, 더 이상,
	// 갈 수 없으면 다시 돌아와서 다른 경로를 탐색하는 방법입니다,


#pragma endregion
	Graph<const char*> graph(5);
	graph.insert("A", "B");


	return 0;
}


