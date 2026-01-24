// problem: https://usaco.org/index.php?page=viewproblem2&cpid=1251
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
    for(ll &i: a)
        cin >> i;

    // algo
    sort(a.begin(), a.end());
    ll x = -1;
    ll m = -1;
    for(ll i = n -1; i >= 0; --i)
    {
        if((n-i) * a[i] >= m){
            m = max(ll((n-i) * a[i]), m);
            x = a[i];
        }
    }

    // output
    cout << m << ' ' << x;

    return 0;
}
