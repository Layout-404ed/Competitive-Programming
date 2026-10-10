// problem: https://codeforces.com/contest/2271/problem/B
// time complexity: o(n)
// i/o: stdio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template <typename T> using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

string solve() {
    // input
    int n, k;
    cin >> n >> k;

    v<int> cnt(n + 2, 0);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a <= n + 1)
            cnt[a]++;
    }

    // algo + output
    for (int x = 0; x <= n + 1; x++) {
        if (cnt[x] < 2 * k) {
            if (cnt[x] == 2 * k - 1)
                return "YES";
            else
                return "NO";
        }
    }

    return "NO";
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';

    return 0;
}
