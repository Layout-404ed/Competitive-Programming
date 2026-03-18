// problem: https://codeforces.com/group/b3VQvMo3bt/contest/672427/problem/A
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
    
    // input
    int l, w; cin >> l >> w;

    // algo

    // output
    cout << (l * w)/2.0;

    return 0;
}
