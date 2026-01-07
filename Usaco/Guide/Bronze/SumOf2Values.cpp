// problem: https://cses.fi/problemset/task/1640
// time complexity: O(n log n)
// i/o: io
#include "bits/stdc++.h"
#include <algorithm>
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input
    int n, k;
    cin >> n >> k;
    
    // algo
    map<int, int> m;
    for(int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        if(m.contains(k - x)){
            cout << i + 1 << ' ' << m[k - x] + 1;
            return 0;
        }
        m[x] = i;
    }

    // output
    cout << "IMPOSSIBLE";

    return 0;
}
