// problem: usaco.org/index.php?page=viewproblem2&cpid=1301
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
    for(ll &i: a)
    {
        cin >> i;
    }

    // algo
    ll x = 0;
    for(ll i = a.size()-1; i >= 0; --i)
    {
        if(a[i] - a[0] > k+1){
            x += k+1;
        }else{
            x += a[i] - a[0] + 1 + k;
            break;
        }
    }

    // output
    cout << x;


    return 0;
}
