// problem: https://usaco.org/index.php?page=viewproblem2&cpid=568
// time complexity: O(n^3)
// i/o: filio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    ifstream in("speeding.in");
    ofstream out("speeding.out");

    // input
    short n, m; in >> n >> m;
    v<pair<short, short>> a(n);
    for(auto& i: a)
        in >> i.first >> i.second;
    v<pair<short, short>> b(n);
    for(auto& i: b)
        in >> i.first >> i.second;

    // algo
    v<short> c;
    for(short i = 0; i < n; ++i)
    {
        for(short j = 0; j < a[i].first; ++j)
            c.push_back(a[i].second);
    }
    
    v<short> d;
    for(short i = 0; i < m; ++i)
    {
        for(short j = 0; j < b[i].first; ++j)
            d.push_back(b[i].second);
    }

    short x = 0;
    for(short i = 0; i < 100; ++i)
        x = max((int)x, (int)(d[i] - c[i]));    

    // output
    out << x;

    in.close();
    out.close();

    return 0;
}
