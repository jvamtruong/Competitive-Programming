#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 1E3;

vector < int > graph[MAX + 5];
bool visit[MAX + 5];
int cnt = 0;

void dfs(int u) {
    cnt++;
    visit[u] = true;
    for (int i = 0 ; i < graph[u].size(); i++) {
        int v = graph[u][i];
        if (!visit[v]) dfs(v);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1 ; i <= n; i++) graph[i].clear();
        memset(visit, false, sizeof visit);
        cnt = 0;
        for (int i = 0 ; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        dfs(1);
        if (cnt == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}