#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1 ; i <= n; i++) {
        for (int j = 1 ; j <= n; j++) {
            int x;
            cin >> x;
            if (x) cout << j << " ";
        }
        cout << endl;
    }
}