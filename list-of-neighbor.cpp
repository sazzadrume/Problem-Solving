#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v) {
        cout << "\n Adjacency list of vertex " << v
             << "\n head ";
        for (auto x : adj[v])
            cout << "-> " << x;
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
	int V;
	cin >> V;

	vector<int> adj[V];

	for (int i = 0; i < V; ++i)
	{
		int left, right;

		cin >> left >> right;

		addEdge(adj, left, right);
	}

	printGraph(adj, V);


	return 0;
}