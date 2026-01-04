/*
 🥹
👉👈
🦶🦶
*/

// problem: 
// time complexity:
// i/o: 
#include "bits/stdc++.h"
using namespace std;
using ll = long long;
template<typename T>
using v = vector<T>;
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
using namespace std;

static const ll MOD = 998244353;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    v<ll> input;
    ll x;
    while (cin >> x) input.push_back(x);
    if (input.empty()) return 0;

    int N = input[0];
    if (N == 0) {
        cout << 0 << "\n";
        return 0;
    }

    v<pair<ll,ll>> points(N);
    int idx = 1;
    for (int i = 0; i < N; i++) {
        ll a = input[idx++];
        ll b = input[idx++];
        points[i] = {a, b};
    }

    sort(points.begin(), points.end(),
        [](auto &p, auto &q) {
            ll r1 = p.first*p.first + p.second*p.second;
            ll r2 = q.first*q.first + q.second*q.second;
            if (r1 != r2) return r1 < r2;
            if (p.first != q.first) return p.first < q.first;
            return p.second < q.second;
        }
    );

    v<ll> r2(N);
    for (int i = 0; i < N; i++) {
        r2[i] = points[i].first * points[i].first +
                points[i].second * points[i].second;
    }

    v<ll> adj(N, 0);

    for (int i = 0; i < N; i++) {
        auto [xi, yi] = points[i];
        ll ri_sq = r2[i];
        ll mask = 0;

        for (int j = i + 1; j < N; j++) {
            auto [xj, yj] = points[j];
            ll dotp = xi * xj + yi * yj;
            if (2 * dotp < ri_sq) {
                mask |= (1LL << j);
            }
        }

        adj[i] = mask;
    }

    unordered_map<long long, ll> memo; 
    memo.reserve(1<<20);
    memo.max_load_factor(0.7);

    auto pack = [&](int u, ll mask) -> long long {
        return (mask << 6) ^ u; 
    };

    function<ll(int,ll)> dfs = [&](int u, ll valid_mask) -> ll {
        long long state = pack(u, valid_mask);
        auto it = memo.find(state);
        if (it != memo.end()) return it->second;

        ll count = 1; 

        ll c = valid_mask;
        while (c) {
            ll low = c & -c;
            int v = __builtin_ctzll(low);
            c ^= low;

            ll new_mask = valid_mask & adj[v];
            count = (count + dfs(v, new_mask)) % MOD;
        }

        memo[state] = count;
        return count;
    };

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        ll candidates = adj[i];
        ans = (ans + dfs(i, candidates)) % MOD;
    }

    cout << ans << "\n";
    return 0;
}