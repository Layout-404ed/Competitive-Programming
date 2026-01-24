// problem: https://usaco.org/index.php?page=viewproblem2&cpid=1012
// time complexity: o(n^2)
// i/o: file
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
    ifstream in("breedflip.in");
    int n; cin >> n;
    string s1, s2; cin >> s1 >> s2;
    in.close();

    // algo
    while(s1 != s2)
    {
        pair<int,  int> change = {0, 0};
        pair<int,  int> tchange = {0, 0};
        for(int i = 1; i < n; ++i)
        {
            if(s1[i] != s2[i]){
                if(s1[i] == s1[i-1]){
                    ++tchange.second;
                }else{
                    isConsequtive = true;
                    tchange.first = i;
                    tchange.second = 1;
                }
            }else{
                if(tchange.second > change.second){
                    change.first = tchange.first;
                    change.second = tchange.second;
                }
                tchange.first = 0;
                tchange.second = 0;
            }
        }


    }

    // output


    return 0;
}
