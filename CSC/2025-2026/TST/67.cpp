// problem: https://codeforces.com/gym/648218/problem/A
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
    v<int> a(4);
    for(int i = 0; i < 4; ++i)
    {
        cin >> a[i];
    }

    // algo
    int se = 0, ei = 0, ni = 0;
    for(int i = 0; i < 4; ++i)
    {
        if(a[i] == 7){
            se = i;
        }else if(a[i] == 8){
            ei = i;
        }else if(a[i] == 9){
            ni = i;
        }
    }

    // output
    if(se < ei && ei < ni){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }


    return 0;
}
