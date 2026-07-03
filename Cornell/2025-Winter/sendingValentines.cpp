// problem: sendingValentimes
// time complexity: O(1)
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
    
    ll t; cin >> t;
    while(t--)
    {
        // input
        ll n; cin >> n;
    
        // output
        cout << n * (n-1) << '\n';
    }


    return 0;
}
