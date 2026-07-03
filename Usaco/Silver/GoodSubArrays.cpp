// problem: https://codeforces.com/contest/1398/problem/C
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
    
    // input
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        string s; cin >> s;

        // algo
        v<ll> p(n+1);
        ll sum = 0;
        for(ll i = 0; i <= n; ++i)
        {
            p[i] = sum;
            sum += s[i] - '0';
        }

        v<ll> q(n+1);
        for(ll i = 0; i <= n; ++i)
            q[i] = p[i] - i;

        map<ll, ll> c;
        for(ll i = 0; i <= n; ++i)
            c.insert({q[i], ++c[q[i]]});

        ll x = 0;
        for(auto& i: c)
            x += i.second*(i.second-1)/2;
        
        // output
        cout << x << '\n';
    }

    return 0;
}
