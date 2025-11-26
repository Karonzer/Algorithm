#include <iostream>
#include <unordered_map>
#include <vector>

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
};
int main()
{

#pragma region BFS 너비 우선 탐색
	// 하나의 시작 정점을 방문한 후 시작 정점에 인접한
	// 모든 정점들을 우선적으로 방문하는 탐색입니다


#pragma endregion

	Graph<char> graph;


	return 0;
}


