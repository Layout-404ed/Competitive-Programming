// problem: https://usaco.org/index.php?page=viewproblem2&cpid=568
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
    int n, m; fin >> n >> m;
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
    int bm = 0, bs = 0, rm = 0, rs = 0, bi = 0, ri = 0, o = 0;
    bool bu = true, ru = true;
    // assert((bm != rm) || (bm != 100));
    while((bm != rm) || (bm != 100))
    {
        // update?
        if (bm < rm){
            // cout << "UPDATE BM\n";
            ru = false;
            bu = true;
        }else if (bm > rm){
            // cout << "UPDATE RM\n";
            ru = true;
            bu = false;
        }else{
            // cout << "UPDATE BOTH\n";
            ru = true;
            bu = true;
        }

        // update
        if(bu){
            bm += b[bi].first;
            bs = b[bi].second;
            ++bi;
            bu = false;
        }
        if(ru){
            rm += r[ri].first;
            rs = r[ri].second;
            ++ri;
            ru = false;
        }

        if(bs - rs > o){
            // dbg(bs-rs);
            o = bs - rs;
        }
    }

    // output
    ofstream fout("speeding.out");
    fout << o << '\n';
    fout.close();
    return 0;
}