// problem: https://ide.usaco.guide/OkyV6WbNor81NEaDxTD
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
    ll n, m; cin >> n >> m;
    v<pair<ll, ll>> arr(n);
    for(auto &i: arr)
        cin >> i.first >> i.second;

    // algo
    ll x = m;
    for(ll i = 0; i < n; ++i)
        x -= arr[i].second;

    ll y = 0;
    for(ll i = 0; i < n; ++i)
        y += arr[i].first;

    double p = x / (double)y;
    
    // output
    if(p < 0)
        cout << 0 << '\n';
    else
        cout << p<< '\n';

    return 0;
}
