#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 1E5;

long long dist[MAX + 5];
long long f[MAX + 5];
priority_queue < pair < long long, int >, vector < pair < long long, int > >, greater < pair < long long, int > > > min_heap;
vector < pair < long long , int > > graph[MAX + 5];

void dijkstra(int u) {
	min_heap.push(make_pair(0, u));
	while (!min_heap.empty()) {
		auto cur = min_heap.top();
		min_heap.pop();
		int u = cur.second;
		int c = cur.first;
		for (int i = 0 ; i < graph[u].size(); i++) {
			int v = graph[u][i].second;
			if (dist[v] == c + graph[u][i].first) {
				f[v] += f[u];
				continue;
			}
			if (dist[v] > c + graph[u][i].first) {
				dist[v] = c + graph[u][i].first;
				f[v] += f[u];
				min_heap.push(make_pair(dist[v], v));
			}
		}
	}	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 1 ; i <= n; i++) dist[i] = 1E12;
	f[1] = 1;
	dist[1] = 0;
	while (m--) {
		int u, v, c;
		cin >> u >> v >> c;
		graph[u].push_back(make_pair(c, v));
		graph[v].push_back(make_pair(c, u));
	}
	dijkstra(1);
	cout << dist[n] << " " << f[n];
}