// problem: https://usaco.org/index.php?page=viewproblem2&cpid=568
// solution: https://usaco.guide/problems/usaco-568-speeding-ticket/solution
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
    ifstream fin("speeding.in");
    size_t n, m; fin >> n >> m;
    vector<pair<int, int>> r(n);
    for(int i = 0; i < n; ++i)
    {
        fin >> r[i].first >> r[i].second;
    }
    vector<pair<int, int>> b(n);
    for(int i = 0; i < n; ++i)
    {
        fin >> b[i].first >> b[i].second;
    }
    fin.close();

    // algo
    vector<int> rs(100);
    int i = 0;
    for(pair<int, int> it: r){
        for(int j = 0; j < it.first; ++j)
        {
            rs[i] = it.second;
            ++i;
        }
    }

    vector<int> bs(100);
    i = 0;
    for(pair<int, int> it: b){
        for(int j = 0; j < it.first; ++j)
        {
            bs[i] = it.second;
            ++i;
        }
    }

    int o = 0;
    for(int i = 0; i < 100; ++i)
    {
        o = max(o, bs[i] - rs[i]);
    }

    // output
    ofstream fout("speeding.out");
    fout << o << '\n';
    fout.close();
    return 0;
}