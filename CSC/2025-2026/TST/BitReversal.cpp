// problem: https://codeforces.com/gym/648218/problem/G
// time complexity: o(5n)?
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
    unsigned int n; cin >> n;

    // algo
    unsigned int x = 0;
    for(unsigned int i = 0; i < 31; ++i)
    {
        x <<= 1;
        x |= (n & 1);
        n >>= 1;
    }

    // output
    cout << x;


    return 0;
}
