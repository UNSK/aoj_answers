#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int main()
{
    int w, h;
    while (cin >> w >> h, w) {
        vector<vector<char>> mat;
        mat.resize(h);
        loop(h,i) {
            string s;
            cin >> s;
            for (char c:s) mat[i].push_back(c);
        }

        for (auto a:mat) {
            for (auto c:a) cout << c;
            cout << endl;
        }
    }
}
