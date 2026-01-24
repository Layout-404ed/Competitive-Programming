// problem: https://usaco.org/index.php?page=viewproblem2&cpid=591
// time complexity: o(n)
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
    
    // input
    ifstream in ("promote.in");
    v<pair<int, int>> a(4);
    for(auto &i: a)
    {  
        in >> i.first;
        in >> i.second;
    }
    in.close();

    // algo
    v<pair<int, int>> b(4);
    for(int i = 0; i < 4; ++i)
    {
        b[i].first = a[i].second - a[i].first;
        b[i].second = i;
    }

    v<int> c(3);
    for(auto i: b)
    {
        for(int j = 0; j < i.second; ++j)
        {
            c[j] += i.first;
        }
    }

    // output
    ofstream out("promote.out");
    for(int i: c)
    {
        out << i << '\n';
    }
    out.close();

    return 0;
}
