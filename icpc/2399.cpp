#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int is_include(vector<int> as, vector <int> bs) {
    for (auto a : as) {
        if (find(all(bs), a) == bs.end()) return 0;
    }
    return 1;
}

int main()
{
    int n;
    while (cin >> n, n) {
        vector<vector<int>> pss;
        pss.resize(n);
        loop (n, i) {
            int m; cin >> m;
            pss[i].resize(m);
            loop(m, j) {
                int tmp; cin >> tmp;
                pss[i][j] = tmp;
            }
        }
        vector<int> ks;
        int k; cin >> k;
        loop (k, i) { int tmp; cin >> tmp; ks.push_back(tmp); }

        int ans = -1;
        int count = 1;
        for (auto ps : pss) {
            if (is_include(ks, ps)) {
                if (ans == -1) {
                    ans = count;
                } else {
                    ans = -1;
                    break;
                }
            }
            count++;
        }
        cout << ans << endl;
    }
}
