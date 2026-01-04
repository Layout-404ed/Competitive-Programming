// problem: https://codeforces.com/problemset/problem/863/B
// time complexity: O(n^3)
// i/o: stdio
#include "bits/stdc++.h"
#include <climits>
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int solve(v<int> a, int i, int j){
    a.erase(a.begin() + i);
    a.erase(a.begin() + j);

    
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    // input
    int n; cin >> n;
    v<int> a(2*n);
    for(int& i: a)
        cin >> i;

    // algo
    sort(a.begin(), a.end());
    int x = INT_MAX;
    for(int i = 0; i <= 2*n; ++i)
    {
        for(int j = 0; j < i; ++j)
        {

        }

        for(int j = i + 1; j <= 2 * n; ++j)
        {
            
        }
    }

    // output
    cout << x;

    return 0;
}
