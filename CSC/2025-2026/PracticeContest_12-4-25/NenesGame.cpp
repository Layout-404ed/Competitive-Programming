// problem: https://codeforces.com/group/61eWPWXekk/contest/656062/problem/A
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
        int k, q; cin >> k >> q;

        // algo
        v<int> a(k);
        for(int &i: a)
        {
            cin >> i;
        }

        v<int> b(q);
        for(int &i: b)
        {
            cin >> i;
        }

        // output
        for(int i: b)
        {
            cout << min(i, a[0] - 1) << ' ';
        }
        cout << '\n';
    }

    return 0;
}
