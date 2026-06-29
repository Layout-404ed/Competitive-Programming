// problem: https://judge.yosupo.jp/problem/static_range_sum
// time complexity: o(n)
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
    ll n, q; cin >> n >> q;
    v<ll> a(n);
    for(ll &i: a)
        cin >> i;

    // algo
    v<ll> s(n);
    ll sum = 0;
    for(ll i = 0; i < n; ++i)
    {
        sum += a[i];
        s[i] = sum;
    }

    while(q--)
    {
        ll l, r; cin >> l >> r;
        if(l == 0)
            cout << s[r-1] << '\n';
        else
            cout << s[r-1] - s[l-1] << '\n';
    }

    return 0;
}
