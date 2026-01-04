// problem: https://codeforces.com/gym/648218/problem/D
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
    
    int t; cin >> t;
    while(t--)
    {
        // input
        int n; cin >> n;
        v<ll> a(n);
        for(ll &i: a)
        {
            cin >> i;
        }

        // algo
        ll x = 0;
        for(int i = 0; i < n; ++i)
        {
            x += a[i] * (n - i);
        }
    
        // output
        cout << x << '\n';

    }
    

    return 0;
}
