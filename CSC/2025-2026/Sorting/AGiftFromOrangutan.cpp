// problem: https://codeforces.com/problemset/problem/2030/A
// time complexity: O(n*log(n))
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
        for(int &i: a)
            cin >> i;

        // algo
        sort(a.begin(), a.end());

        int x = (a[a.size()-1] - a[0]) * (n - 1);

        // output
        cout << x << '\n';
    }

    return 0;
}
