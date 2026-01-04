// problem: https://cses.fi/problemset//task/1083
// time complexity: O(n)
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
    v<int> a(n - 1, 0);
    for(int &i: a)
        cin >> i;

    // algo
    v<int> b(n);
    for(int i = 1; i <= n; ++i)
        b[i-1] = i;
    
    sort(a.begin(), a.end());
    
    int x = n;
    for(int i = 0; i < n - 1; ++i)
    {
        if(a[i] != b[i]){
            x = i + 1;
            break;
        }
    }

    // output
    cout << x;

    return 0;
}
