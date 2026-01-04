// problem: https://cses.fi/problemset/task/1621
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
    int n; cin >> n;
    v<int> a(n);
    for(int &i: a)
    {
        cin >> i;
    }

    // algo
    set<int> b;
    for(int i: a)
    {
        b.insert(i);
    }
    
    // output
    cout << b.size();

    return 0;
}