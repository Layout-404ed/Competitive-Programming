// problem: https://codeforces.com/problemset/problem/546/A
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
    
    // input
    int k, n, w; cin >> k >> w >> n;

    // algo
    int x = 0;
    for(int i = 1; i <= n; ++i)
    {
        x += i * k;
    }

    x -= w;
    if(x < 0){
        x = 0;
    }

    // output
    cout << x;

    return 0;
}
