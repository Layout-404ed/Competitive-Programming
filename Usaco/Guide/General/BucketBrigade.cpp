// problem: https://usaco.org/index.php?page=viewproblem2&cpid=939
// time complexity: o(n^3)
// i/o: filio
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

struct point{
    int x;
    int y;
};

bool isInSameRow(int x, int y, int z){
    return (x == y) && (y == z);
}
bool isBetween(int x, int y, int z){
    return (x < y && y < z) || (z < y && y < x);
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    ifstream in("buckets.in");
    ofstream out("buckets.out");
    
    // input
    point b;
    point l;
    point r;
    for(int i = 0; i < 10; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            char c; in >> c;
            if(c == 'B'){
                b.x = j;
                b.y = i;
            }else if(c == 'L'){
                l.x = j;
                l.y = i;
            }else if (c == 'R'){
                r.x = j;
                r.y = i;
            }
        }
    }

    // algo
    int d = abs(b.x - l.x) + abs(b.y - l.y) - 1;
    if((isInSameRow(b.x, r.x, l.x) && isBetween(b.y, r.y, l.y)) || (isInSameRow(b.y, r.y, l.y) && isBetween(b.x, r.x, l.x))){
        d += 2;
    }

    // output
    out << d;
    
    in.close();
    out.close();

    return 0;
}
