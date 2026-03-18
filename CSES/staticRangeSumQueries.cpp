// problem: https://cses.fi/problemset/task/1646
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
    ll n, k; cin >> n >> k;
    v<ll> a(n);
    for(ll& i: a)
        cin >> i;

    v<ll> sum(n);
    sum[0] = a[0];
    for(ll i = 1; i < n; ++i)
        sum[i] = sum[i-1] + a[i];

    while(k--)
    {
        ll a, b; cin >> a >> b;
        --a, --b;
        cout << sum[b] - (a == 0? 0 : sum[a-1]) << '\n';
    }

    return 0;
}
