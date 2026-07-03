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
    ll work = 0;
    ll total = 0;
    for(int i = 1; i <= arr[0].first; ++i)
    {
        for(int j = 1; i <= arr[1].second; ++j)
        {
            if(i + arr[0].second + j + arr[1].second <= m)
                ++work;
            ++total;
        }
    }
    
    // output
    cout << work / (double)total;
    
    return 0;
}
