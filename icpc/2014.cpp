#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int f[50][50];

bool contains(int *vs, int n) {
    loop(sizeof(vs),i) if (vs[i] == n) return true;
    return false;
}


int dfs(vector<vector<int>> &m, int h, int w, vector<vector<char>> as) {
    if (h < 0 || w < 0 || h >= m.size() || w >= m[h].size()) {
        return 0;
    }
    if (f[h][w]) return m[h][w];
    f[h][w] = 1;
    if (as[h][w] == 'B') return 1;
    if (as[h][w] == 'W') return 2;
    int t[4];
    t[0] = dfs(m, h-1, w, as);
    t[1] = dfs(m, h+1, w, as);
    t[2] = dfs(m, h, w+1, as);
    t[3] = dfs(m, h, w-1, as);
    // debug
    cout << "(h,w)=" << '(' << h << ',' << w << ')' << endl;
    for (auto a:t) cout << a << ' ';
    cout << endl;

    if (contains(t, 1)) {
        if (contains(t, 2)) {
            m[h][w] = 0;
            return 0;
        } else {
            m[h][w] = 1;
            return 1;
        }
    } else if (contains(t,2)) {
        m[h][w] = 2;
        return 2;
    }
    m[h][w] = 0;
    return 0;
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

        vector<vector<int>> mat(h, vector<int>(w,0));
        loop(h,i){
            loop(w,j){
                dfs(mat, i, j, as);
            }
            cout << endl;
        }

       for(auto mm:mat) {
           for (auto m:mm) cout << m << ' ';
           cout << endl;
       }

    }
}
