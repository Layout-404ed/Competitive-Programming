// problem: https://codeforces.com/problemset/problem/231/A
// time complexity: O(n^2)
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
    int n; cin >> n;

    // algo
    int x = 0;
    for(int i = 0; i < n; ++i)
    {
        int m = 0;
        for(int j = 0; j < 3; ++j)
        {
            int a; cin >> a;
            if(a == 1){
                ++m;
            }
        }
        if(m >= 2){
            ++x;
        }
    }

    // output
    cout << x;

    return 0;
}
