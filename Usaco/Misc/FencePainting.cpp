// problem: 
// time complexity:
// i/o: o(n^3)
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
    ifstream in("paint.in");
    int a, b, c, d; in >> a >> b >> c >> d;
    in.close();

    // algo
    if(a > c){
        swap(a, c);
        swap(b, d);
    }

    int x = 0;
    if(b > c){
        x = d - a;
    }else{
        x = (b - a) + (d - c);
    }

    // output
    ofstream out("paint.out");
    out << x;
    out.close();

    return 0;
}
