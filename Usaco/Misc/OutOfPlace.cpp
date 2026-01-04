// problem: https://usaco.org/index.php?page=viewproblem2&cpid=785
// time complexity: o(n^3)
// i/o: fileio
#include "bits/stdc++.h"
#include <fstream>
#include <unordered_set>
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input
    ifstream in("outofplace.in");
    int n; in >> n;
    set<int> a;
    unordered_set<int> b;
    for(int i = 0; i < n; ++i)
    {
        int x; in >> x;
        a.insert(x);
        b.insert(x);
    }
    in.close();

    // algo
    v<int> c;
    for(int i: a)
    {
        c.push_back(i);
    }
    
    v<int> d;
    for(int i: b)
    {
        d.push_back(i);
    }

    int x = 0;
    while(c != d)
    {
        for(int i = 1; i < n; ++i)
        {
            if(d[i-1] > d[i]){
                swap(d[i-1], d[i]);
                ++x;
                break;
            }
        }
    }

    // output
    ofstream out("outofplace.out");
    out << x;

    return 0;
}
