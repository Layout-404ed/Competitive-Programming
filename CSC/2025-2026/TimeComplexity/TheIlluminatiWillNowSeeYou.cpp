// problem: https://codeforces.com/group/61eWPWXekk/contest/648218/problem/D
// time complexity: O(n)
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
    
    ll t; cin >> t;
    while(t--)
    {
        // input
        ll n; cin >> n;
        v<ll> a(n);
        for(ll& i: a)
            cin >> i;

        // algo
        ll x = 0;
        for(ll i = 0; i < n; ++i)
            x += a[i] * (n - i);
    
        // output
        cout << x << '\n';
    }


    return 0;
}
