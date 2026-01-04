// problem: https://calicojudge.com/team/problems/815/statement
// time complexity: o(n)
// i/o: stdio
#include "bits/stdc++.h"
#include <tuple>
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
        int n, m, k; cin >> n >> m >> k;
        v<tuple<char, int, int>> a(k);
        for(auto &i: a)
        {
            cin >> get<0>(i) >> get<1>(i) >> get<2>(i);
        }

        // algo
        
        for(int i = 0; i < k; ++i)
        {
            for(int i = 0)
        }

        // output

    
    }
    
    return 0;
}
