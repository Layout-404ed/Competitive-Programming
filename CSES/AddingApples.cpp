// problem: https://cses.fi/problemset/task/1623
// time complexity: O(2^*n)
// i/o: stdio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

ll appleDiv(ll i, ll t1, ll t2);

ll n;
v<ll> a;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input
    cin >> n;
    a.resize(n);
    for(ll& i: a) cin >> i;

    // output
    cout << appleDiv(0, 0, 0);

    return 0;
}

ll appleDiv(ll i, ll t1, ll t2){
    if(i == n) return abs(t2 - t1);
    return min(appleDiv(i + 1, t1 + a[i], t2), appleDiv(i + 1, t1, t2 + a[i]));
}