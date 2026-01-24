// problem: https://codeforces.com/problemset/problem/4/A
// time complexity: O(n^3)
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
    string s = ((n % 2 == 0) && n != 2)? ("YES") : ("NO");

    // output
    cout << s;

    return 0;
}
