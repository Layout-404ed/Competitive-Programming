// problem: busstops
// time complexity: 
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
    v<pair<ll, ll>> a(n);
    for(auto &i: a)
    {
        cin >> i.first;
        cin >> i.second;
    }

    // algo
    ll x1 = 0;
    for(ll i = 0; i < n; ++i)
        x1 += a[i].second;

    ll x2 = 0;
    for(ll i = 0; i < n; ++i)
    {
        x2 += a[i].first;
        x2 += a[i].second;
    }

    // output
    cout << x1 << ' ' << x2 << '\n';


    return 0;
}
