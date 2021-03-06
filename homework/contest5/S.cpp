#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

multiset < int > s;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector < int > a(n);
		s.clear();
		for (int i = 0 ; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0 ; i < n - 1; i++) {
			s.insert(abs(a[i] - a[i + 1]));
		}
		cout << *s.begin() << " " << s.count(*s.begin()) << endl;
	}
}
