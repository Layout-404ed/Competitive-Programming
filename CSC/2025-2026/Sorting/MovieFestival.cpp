// problem: https://cses.fi/problemset/task/1629
// time complexity: O(n * log(n))
// i/o: stdio
#include "bits/stdc++.h"
#include <climits>
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
    v<pair<int, int>> a(n);
    for(auto &i: a)
    {
        cin >> i.second;
        cin >> i.first;
    }

    // algo
    sort(a.begin(), a.end());
    
    int m = 0;
    int t = 0;
    for(int i = 0; i < n; ++i)
    {
        if(t <= a[i].second){
            ++m;
            t = a[i].first;
        }
    }

    // output
    cout << m;

    return 0;
}
