// problem: https://codeforces.com/group/b3VQvMo3bt/contest/672427/problem/B
// time complexity: O(1);
// i/o: stdio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	// ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input
    ll a, b, c, d; cin >> a >> b >> c >> d;

    // algo

    // output
    cout << pow(a, b) * c + d << '\n';


    return 0;
}
