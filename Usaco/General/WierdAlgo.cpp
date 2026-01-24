// problem: https://cses.fi/problemset/task/1068
// time complexity: o(n)
// i/o: stdio
#include "bits/stdc++.h"
#include <string>
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input
    ll n; cin >> n;

    // algo
    string s = to_string(n) + ' ';
    while(n > 1)
    {
        n = !(n % 2)? (n/2) : (3*n +1);
        s += to_string(n) + ' ';
    }
    s.erase(s.end() - 1);

    // output
    cout << s;

    return 0;
}
