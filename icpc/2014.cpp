#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;


int dfs(vector<vector<int>> *m, int h, int w) {
    cout << (*m)[i][j];
    if ((*m)[i][j] != -1) return (*m)[i][j];
    if (h < 0 || w < 0 || h >= (*m).size() || w >= (*m)[h].size()) {
        return -1;
    }
    if 
    int u = dfs(m, h-1, w);
    int d = dfs(m, h+1, w);
    int r = dfs(m, h, w+1);
    int l = dfs(m, h, w-1);
    return 1;
}

int main()
{
    int w, h;
    while (cin >> w >> h, w) {
        vector<vector<char>> as;
        as.resize(h);
        loop(h,i) {
            string s;
            cin >> s;
            for (char c:s) as[i].push_back(c);
        }

        vector<vector<int>> mat(h, vector<int>(w,-1));
        loop(h,i){
            loop(w,j){
                mat[i][j] = dfs(&mat, i, j);
            }
            cout << endl;
        }

    }
}
