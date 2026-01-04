// problem: https://codeforces.com/group/61eWPWXekk/contest/652632/problem/F
// time complexity: O(n * log(n))
// i/o: stdio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input
    ll n; cin >> n;
    v<ll> a(n);
    for(ll& i: a)
        cin >> i;
    v<ll> b(n);
    for(ll& i: b)
        cin >> i;

    // algo
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll x = 0;
    for(ll i = 0; i < n; ++i)
        x += abs(a[i] - b[i]);

    // output
    cout << x;

    return 0;
}
