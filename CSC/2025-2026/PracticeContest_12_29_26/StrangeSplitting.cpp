// problem: https://codeforces.com/group/61eWPWXekk/contest/667921/problem/A
// time complexity: O(n^3)
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
    
    int t; cin >> t;
    while(t--)
    {
        // input
        int n; cin >> n;
        v<int> arr(n);
        for(int &i: arr)
            cin >> i;
        
        // algo
        if(arr[0] == arr[n-1])
            cout << "NO\n";
        else{
            string str(n, 'R');
            int x = 0;
            for(int i = 1; i < n; ++i)
            {
                if(arr[i] == arr[i - 1])
                    x = i;
            }
            str[x] = 'B';
            cout << "YES\n" << str << '\n';
        }        
    }

    return 0;
}
