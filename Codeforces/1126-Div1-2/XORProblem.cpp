// problem: https://codeforces.com/contest/2271/problem/C
// time complexity: o(n)
// i/o: stdio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template <typename T> using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

void solve() {
    // input
    int n;
    cin >> n;

    // algo
    int K = 1;
    while (2 * K <= n) {
        K *= 2;
    }

    if (K == 1) {
        cout << 3 << '\n';
        cout << "1 1 1\n";
        return;
    }

    v<int> p;
    p.reserve(4 * K);
    p.push_back(0);
    p.push_back(K);
    p.push_back(0);

    for (int i = 1; i < K; i++) {
        p.push_back(i);
        p.push_back(i);
    }

    p.push_back(2 * K - 1);
    p.push_back(2 * K - 1);

    for (int j = 2 * K - 2; j > K; j--) {
        p.push_back(j);
        p.push_back(j);
    }

    p.push_back(K);

    int k = (int)p.size() - 1;
    v<int> a(k);
    for (int i = 0; i < k; i++) {
        a[i] = p[i + 1] ^ p[i];
    }

    // output
    cout << k << '\n';
    for (int i = 0; i < k; i++) {
        cout << a[i] << (i + 1 == k ? '\n' : ' ');
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
