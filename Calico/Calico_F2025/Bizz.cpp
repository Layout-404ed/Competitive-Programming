// problem: https://calicojudge.com/public/problems/813/statement
// time complexity: ?
// i/o: stdio
#include "bits/stdc++.h"
#include <string>
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
        string s1, s2; cin >> s1 >> s2;
        
        // algo
        string s = "";
        if(isdigit(s1[0])){
            int x = stoi(s1);
            x += 2;
            if(!(x % 3)){
                s += "bizz";
            }
            if(!(x % 5)){
                s += "fuzz";
            }
            if(x % 3 && x % 5){
                s += to_string(x);
            }
        }else if(isdigit(s2[0])){
            int x = stoi(s2);
            ++x;
            if(!(x % 3)){
                s += "bizz";
            }
            if(!(x % 5)){
                s += "fuzz";
            }
            if(x % 3 && x % 5){
                s += to_string(x);
            }
        }else{
            s = "crap";
        }
        s += '\n';

        // output
        cout << s;

    }
    
    return 0;
}
