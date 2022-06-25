#include <bits/stdc++.h>

using namespace std;

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

		adj[left].push_back(right);
		adj[right].push_back(left);
	}

	printGraph(adj, V);


	return 0;
}