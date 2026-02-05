// problem: https://usaco.org/index.php?page=viewproblem&cpid=1553
// time complexity: dk
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
    
    int n, k;
    cin >> n >> k;

    struct Move { int x, y, z; };
    v<Move> moves(k);

    for (int i = 0; i < k; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        x--; y--; z--;
        moves[i] = {x, y, z};
    }

    int totalBoards = 1 << n;
    v<int> score(totalBoards, 0);

    map<tuple<int,int,int>, int> moveCount;
    for (auto &m : moves) {
        moveCount[{m.x, m.y, m.z}]++;
    }

    for (auto &[t, cnt] : moveCount) {
        int x = get<0>(t), y = get<1>(t), z = get<2>(t);
        int freeMask = ((1 << n) - 1) & ~((1 << x) | (1 << y) | (1 << z));
        int subset = freeMask;
        do {
            int b = (1 << x) | subset;
            score[b] += cnt;

            if (subset == 0) break;
            subset = (subset - 1) & freeMask;
        } while (true);
    }

    int maxScore = 0, countBoards = 0;
    for (int b = 0; b < totalBoards; b++) {
        if (score[b] > maxScore) {
            maxScore = score[b];
            countBoards = 1;
        } else if (score[b] == maxScore) {
            countBoards++;
        }
    }

    cout << maxScore << " " << countBoards << "\n";

    return 0;
}