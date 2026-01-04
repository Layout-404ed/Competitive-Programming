// problem: https://codeforces.com/group/61eWPWXekk/contest/652632/problem/B
// time complexity: o(log^2n)
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
    
    size_t t; cin >> t;
    while(t--)
    {
        // input
        string n; cin >> n;
        
        // algo
        v<ll> freq(30);
        for(int i = 0; i <= 9; ++i)
        {
            for(int j = 0; j <= 9; ++j)
            {
                for(int l = 0; l <= 9; ++l)
                {
                    ++freq[i + j + l];
                }
            }
        }
    
        ll x = 1;
        for(size_t i = 0; i < n.size(); ++i)
        {
            x *= freq[n[i] - '0'];
        }

        // output
        cout << x << '\n';
    }

    return 0;
}
