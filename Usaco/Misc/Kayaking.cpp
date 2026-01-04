//TODO: Fix
// problem: https://codeforces.com/contest/863/problem/B
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
    vector<int> a(2*n);
    for(int &x: a)
    {
        cin >> x;
    }

    // algo
    set<int> instabilities;
    for(int i = 0; i < 2*n; ++i)
    {
        for(int j = 0; j < 2*n; ++j)
        {
            int instability = 0;
            if(i != j){
                v<int> b = a;
                b.erase(b.begin() + i);
                if(i > j){
                    b.erase(b.begin() + j);
                }else{
                    b.erase(b.begin() + j-1);
                }

                for(int k = 1; k < b.size(); k += 2)
                {
                    instability += b[k] - b[k-1];
                }
                instabilities.insert(instability);
            } 
        }
    }
    

    // output
    cout << *instabilities.begin() << '\n';

    return 0;
}