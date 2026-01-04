    // problem: https://codeforces.com/contest/2166/problem/C
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
        
        int t; cin >> t;
        while(t--)
        {
            // input
            int n; cin >> n;
            v<int> a(n);
            for(int &i: a)
            {
                cin >> i;
            }
            
            // algo
            v<int> b;
            for(int i = 0; i < n; ++i)
            {
                if(i == n-1){
                    b.push_back(max(a[i], a[0]));
                }else{
                    b.push_back(max(a[i], a[i+1]));
                }
            }
        
            sort(b.begin(), b.end());
            int x = 0;
            for(int i = 0; i < b.size()-1; ++i)
            {
                x += b[i];
            }

            // output
            cout << x << '\n';
        }

        return 0;
    }
