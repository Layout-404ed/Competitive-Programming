// problem: https://codeforces.com/contest/2169/problem/A
// time complexity: O(n)
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
        int n, a; cin >> n >> a;
        v<int> m(n);
        for(int &i: m)
        {
            cin >> i;
        }

        // algo
        pair<int, int> b1 = {
            a-1,
            0
        };
        pair<int, int> b2{
            a+1,
            0
        };

        for(int i = 0; i < n; ++i)
        {
            if(abs(m[i] - b1.first) < abs(m[i] - a)){
                ++b1.second;
            }else if(abs(m[i] - b2.first) < abs(m[i] - a)){
                ++b2.second;
            }
        }

        int x = ((b1.second > b2.second) ? b1.first : b2.first);

        // output
        cout << x << '\n';
    }    

    return 0;
}
