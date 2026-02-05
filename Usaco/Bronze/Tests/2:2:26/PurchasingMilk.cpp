// problem: https://usaco.org/index.php?page=viewproblem&cpid=1553
// time complexity: dk
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
    
    int n, q;
    cin >> n >> q;
    v<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) a[i] = min(a[i], 2*a[i-1]);

    v<ll> packs, costs;
    for (int i = 0; i < n && (1LL<<i) <= 1e9; i++) {
        packs.push_back(1LL<<i);
        costs.push_back(a[i]);
    }

    while(q--) {
        ll x;
        cin >> x;
        ll res = LLONG_MAX;
        ll cost = 0;

        for (int i = packs.size()-1; i >= 0; i--) {
            ll take = x / packs[i];
            cost += take * costs[i];
            x -= take * packs[i];
            res = min(res, cost + (x>0 ? costs[i] : 0));
        }

        cout << res << "\n";
    }
    
    return 0;
}
