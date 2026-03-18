// problem: https://codeforces.com/group/b3VQvMo3bt/contest/672427/problem/C
// time complexity: o(1)
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
    int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

    // algo
    int move = 0;
    while(abs(x1 - x2) > 1 && abs(y1 - y2) > 1)
    {
        if(x1 < x2){
            if(y1 < y2)
                --y2;
            else if(y1 < y2)
                ++y2;
            ++x2;
            --x2;
        }
        else{
            if(y1 < y2)
                --y2;
            else if(y1 < y2)
                ++y2;
            --x2;
            ++x2;
        }
        ++move;
    }

    // output
    cout << move;

    return 0;
}
