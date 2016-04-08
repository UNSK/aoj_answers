#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int f[50][50];

int dfs(vector<vector<int>> &m, int h, int w, vector<vector<char>> as) {
    if (h < 0 || w < 0 || h >= m.size() || w >= m[h].size()) {
        return 0;
    }
    if (as[h][w] == 'B') return 1;
    if (as[h][w] == 'W') return 2;
    if (f[h][w]) return m[h][w];
    f[h][w] = 1;
    int t=0;
    t |= dfs(m, h-1, w, as);
    t |= dfs(m, h+1, w, as);
    t |= dfs(m, h, w+1, as);
    t |= dfs(m, h, w-1, as);
    m[h][w] = t;
    return t;
}

int siage(vector<vector<int>> &m, int h, int w, vector<vector<char>> as, int max_num) {
    if (h < 0 || w < 0 || h >= m.size() || w >= m[h].size()) {
        return 0;
    }
    if (as[h][w] == 'B') return 0;
    if (as[h][w] == 'W') return 0;
    if (f[h][w]) return m[h][w];
    f[h][w] = 1;
    int t=0;
    max_num = max(max_num, m[h][w]);
    max_num = max(max_num, siage(m, h-1, w, as, max_num));
    max_num = max(max_num, siage(m, h+1, w, as, max_num));
    max_num = max(max_num, siage(m, h, w-1, as, max_num));
    max_num = max(max_num, siage(m, h, w+1, as, max_num));
    m[h][w] = max_num;
    return max_num;
}

int main()
{
    int w, h;
    while (cin >> w >> h, w) {
        loop(50,i) loop(50,j) f[i][j] = 0;
        vector<vector<char>> as;
        as.resize(h);
        loop(h,i) {
            string s;
            cin >> s;
            for (char c:s) as[i].push_back(c);
        }
       // for(auto mm:as) {
       //     for (auto m:mm) cout << m << ' ';
       //     cout << endl;
       // }

        vector<vector<int>> mat(h, vector<int>(w,0));
        loop(h,i){
            loop(w,j){
                if (as[i][j] == '.') {
                    dfs(mat, i, j, as);
                }
            }
        }
        loop(50,i) loop(50,j) f[i][j] = 0;

        loop(h,i){
            loop(w,j){
                if (as[i][j] == '.') {
                    siage(mat, i, j, as, 0);
                }
            }
        }
        int ans_w = 0, ans_b = 0;
        for(auto mm:mat) {
            for (auto m:mm) {
                if (m == 1) ans_b++;
                if (m == 2) ans_w++;
                //cout << m << ' ';
            }
            //cout << endl;
        }
        cout << ans_b << ' ' << ans_w << endl;

    }
}
