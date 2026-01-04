// problem: https://codeforces.com/contest/2166/problem/A
// time complexity: o(n^3)
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
        string s; cin >> s;

        // algo
        char c = s[s.length()-1];
        int x = s.length() - count(s.begin(), s.end(), c);

        // output
        cout << x << '\n';
    }

    return 0;
}
