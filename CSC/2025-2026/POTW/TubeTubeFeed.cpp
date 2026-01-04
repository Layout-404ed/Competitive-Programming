// problem: https://codeforces.com/group/61eWPWXekk/contest/652632/problem/A
// time complexity: O(n^2)
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
        int n, k; cin >> n >> k;
        v<int> a(n);
        for(int &i: a)
        {
            cin >> i;
        }
        v<int> b(n);
        for(int &i: b)
        {
            cin >> i;
        }

        // algo
        v<pair<int, int>> c;
        for(int i = 0; i < n; ++i, --k)
        {
            if(a[i] <= k){
                c.push_back({b[i], i});
            }
        }

        int m = 0;
        int x = -1;
        for(int i = 0; i < c.size(); ++i)
        {
            if(m <= c[i].first){
                m = c[i].first;
                x = c[i].second + 1;
            }
        }

        // output
        cout << x << '\n';
    }

    return 0;
}
