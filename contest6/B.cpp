#include<bits/stdc++.h>
#define endl '\n'
using namespace std;




int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector < int > a(n);
	for (int i = 0 ; i < n; i++) {
		cin >> a[i];
	}	
	sort(a.begin(), a.end());
	int q;
	cin >> q;
	while (q--) {
		int x;
		cin >> x;
		int idx = upper_bound(a.begin(), a.end(), x) - a.begin();
		cout << idx << endl;
	}
}