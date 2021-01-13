#include<iostream>
#include<vector>

using namespace std;

void dfs(vector<int> adj[], vector<bool>& visited, int node)
{
	if (visited[node])
		return;

	visited[node] = true;
	cout << node; /* Do processing with the node */
	for (auto x : adj[node])
	{
		dfs(adj, visited, x);
	}
}

int main()
{
	vector<int> adj[4];
	vector<bool> visited(4);
	adj[0].push_back(1);
	adj[0].push_back(3);
	adj[3].push_back(2);
	/* Initialize the graph over here */
	dfs(adj, visited, 0);
	return 0;
}