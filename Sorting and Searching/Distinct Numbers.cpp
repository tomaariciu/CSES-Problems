#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	int n;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (i == 0 || v[i] != v[i - 1]) {
			ans++;
		}
	}
	cout << ans;
}

int main() {
#ifdef LOCAL
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
#endif // LOCAL
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tests = 1;
    //cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}