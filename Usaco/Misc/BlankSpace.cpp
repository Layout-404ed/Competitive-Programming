// problem: https://codeforces.com/contest/1829/problem/b
// time complexity: O(n^3)
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
        v<int> a(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        // algo
        int z = 0;
        int x = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] == 0){
                ++z;
            }
            if(a[i] != 0 || i == n-1){
                x = max(x, z);
                z = 0;
            }
        }

        // output
        cout << x << '\n';
    }

    return 0;
}