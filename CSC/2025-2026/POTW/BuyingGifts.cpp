// problem: https://codeforces.com/group/61eWPWXekk/contest/652632/problem/C
// time complexity: O(n * log(n))
// i/o: stdio
//TODO: Solve
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
        v<pair<int, int>> a(n);
        for(auto &i: a)
        {
            cin >> i.first >> i.second;
        }
        
        // algo
        // for b
        pair<int, int> b = {0, 0};
        for(int i = 0; i < n; ++i)
        {
            if(a[i].first > b.first){
                b.first = a[i].first;
                b.second = i;
            }
        }
        
        int d1 = INT_MAX;
        for(int i = 0; i < n; ++i)
        {
            int x = abs(b.first - a[i].second);
            if(b.second != i && d1 > x)
                d1 = x;
        }

        // for c
        pair<int, int> c = {0, 0};
        for(int i = 0; i < n; ++i)
        {
            if(a[i].second > c.first){
                c.first = a[i].second;
                c.second = i;
            }
        }
        
        int d2 = INT_MAX;
        for(int i = 0; i < n; ++i)
        {
            int x = abs(c.first - a[i].first);
            if(c.second != i && d2 > x)
                d2 = x;
        }

        // output
        cout << min(d1, d2) << '\n';
    }
    
    return 0;
}
