// problem: https://codeforces.com/group/61eWPWXekk/contest/656062/problem/C
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
        int n; cin >> n;

        // algo
        int x = 0;
        int c = n;
        while(c > 0)
        {
            c -= 2;
            ++x;
        }

        // output
        cout << x << '\n';
    }
    
    return 0;
}
