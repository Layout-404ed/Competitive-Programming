// problem: https://usaco.org/index.php?page=viewproblem2&cpid=807
// time complexity: o(n!)
// i/o: filio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    ifstream in("teleport.in");
    ofstream out("teleport.out");
    
    // input
    int a, b, x, y; in >> a >> b >> x >> y;

    // algo
    if(b < a){
        swap(a, b);
    }
    if(y < x){
        swap(y, x);
    }
    
    int sol = 0;
    if(b-a < abs(x-a) + abs(y-b)){
        sol = b-a;
    }else{
        sol = abs(x-a) + abs(y-b);
    }

    // output
    out << sol;

    in.close();
    out.close();

    return 0;
}