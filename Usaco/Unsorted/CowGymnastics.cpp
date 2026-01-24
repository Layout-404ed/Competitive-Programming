// problem: https://usaco.org/index.php?page=viewproblem2&cpid=963
#include "bits/stdc++.h"
#include <fstream>
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

    // input
    ifstream in("gymnastics.in");
    int k, n; in >> k >> n;
    vector<vector<int>> a(k);
    for(int i = 0; i < k; ++i)
    {
        vector<int> b(n);
        for(int j = 0; j < n; ++j)
        {
            in >> b[j];
        }
        a[i] = b;
    }
    in.close();

    // algo
    int x = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            bool isConsistent = true;
            for(int t = 0; t < k; ++t)
            {
                int ii = 0, ji = 0;
                for(int l = 0; l < n; ++l)
                {
                    if(a[t][l] == i){
                        ii = l;
                    }else if(a[t][l] == j){
                        ji = l;
                    }
                }
                if(ii >= ji){
                    isConsistent = false;
                    break;
                }
            }
            if(isConsistent){
                // cout << i << ',' << j << '\n';
                ++x;
            }
        }
    }

    ofstream out("gymnastics.out");
    out << x;
    out.close();
    
    return 0;
}