// problem: https://usaco.org/index.php?page=viewproblem2&cpid=785
// time complexity: O(n^3)
// i/o: filio
#include "bits/stdc++.h"
#include <algorithm>
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    ifstream in("outofplace.in");
    ofstream out("outofplace.out");
    
    // input
    int n; in >> n;
    v<int> a(n);
    for(int& i: a)
    {
        in >> i;
    }

    // algo
    v<int> b = a;
    sort(b.begin(), b.end());
    
    int x = 0;
    for(int i = 0; i < n; ++i)
    {
        if(a[i] != b[i])
            ++x;
    }

    // output
    out << x - 1;

    in.close();
    out.close();

    return 0;
}