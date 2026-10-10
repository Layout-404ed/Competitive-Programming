// problem: https://codeforces.com/contest/2271/problem/A
// time complexity: o(1)
// i/o: stdio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template <typename T> using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int solve() {
    // input
    int a, b;
    cin >> a >> b;

    // algo + output
    if (b > a + 1)
        return -1;
    if (a % 2 == b % 2)
        return a;
    return a + 1;
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
