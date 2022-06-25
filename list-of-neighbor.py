array<list<int>> adj[V]

for each edge:
	adj[edge[0]].push_back(edge[1])
	ad[[edge[1]].push_back(edge[0])

for each node x:
	output adj[x]