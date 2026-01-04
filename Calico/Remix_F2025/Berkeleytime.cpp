// problem: https://calicojudge.com/team/problems/495/statement
// time complexity: o(n^3)
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

        // algo
        string s = "";
        if(n < 10){
            s = "haha good one";
        }else if(n >= 180){
            s = "canceled";
        }else{
            for(int i = 0; i < n; i += 10)
            {
                s += "berkeley";
            }
            s += "time";
        }

        // output
        cout << s << '\n';
    }

    return 0;
}
