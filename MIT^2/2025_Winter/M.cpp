// problem: https://mitit.org/Contest/ViewProblem/m?cid=beginner-25-26
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
        int n; cin >> n;
        
        // algo
        v<v<char>> a(n);
        for(int i = 0; i < n; ++i)
        {
            v<char> b(n, '.');
            a.at(i) = b;
        }

        for(int i = 0; i < n; ++i)
        {
            a[i][0] = '#';
            a[i][n-1] = '#';
        }

        for(int i = 1; i <= n/2; ++i)
        {
            a[i][i] = '#';
        }

        for(int r = n/2 - 1, c = n/2 + 1; c < n; --r, ++c)
        {
            a[r][c] = '#';
        }
        
        // output
        for(auto i: a)
        {
            for(auto j: i)
            {
                cout << j;
            }
            cout << '\n';
        }
    }

    return 0;
}
