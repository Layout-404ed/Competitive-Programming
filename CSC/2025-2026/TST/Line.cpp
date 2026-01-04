// problem: https://codeforces.com/gym/648218/problem/C
// time complexity: o(n)
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
    v<pair<int, int>> p(2);
    for(int i = 0; i < 2; ++i)
    {
        cin >> p[i].first >> p[i].second;
    }

    // algo
    double m = (p[1].second - p[0].second) / (double) (p[1].first - p[0].first);
    double y = p[0].second - (p[0].first * m);

    // output
    cout << m << ' ' << y;

    return 0;
}
