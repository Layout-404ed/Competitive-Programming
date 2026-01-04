// problem: https://codeforces.com/contest/2166/problem/B
// time complexity: o(1)
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
        int a, b, n; cin >> a >> b >> n;

        // algo
        int x = a / b;
        if(b >= a) x = 1;
        else if(n <= x) x = 1;
        else x = 2;

        // output
        cout << x << '\n';
    }

    return 0;
}
