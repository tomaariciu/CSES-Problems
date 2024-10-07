#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
	ll n;
	cin >> n;
	cout << n << ' ';
	while(n != 1) {
		if (n % 2 == 1) {
			n = 3 * n + 1;
		} else {
			n = n / 2;
		}
		cout << n << ' ';
	}
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