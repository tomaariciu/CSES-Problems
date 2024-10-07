/// My current template for cpp solutions
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const int mod = 1000000007;

void solve() {
	int n;
	cin >> n;
	vector <int> dp(n + 1);
	dp[0] = 1;
	for (int sum = 0; sum <= n; sum++) {
		for (int i = 1; i <= 6 && sum + i <= n; i++) {
			dp[sum + i] = (dp[sum + i] + dp[sum]) % mod;
		}
	}
	cout << dp[n];
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