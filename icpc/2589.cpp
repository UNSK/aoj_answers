#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int main()
{
    int N = 0;
    int W = 1;
    string s;
    while (cin >> s) {
        if (s == "#") break;
        vector<int> stack;
        loop(s.size(), i) {
            if (s[i] == 'n') {
                stack.push_back(N);
                i+=4;
            } else {
                stack.push_back(W);
                i+=3;
            }
        }
//        for(auto i : stack) cout << i;
//        cout << endl;
        vector<pair<int,int>> rs;
        rs.push_back({2,3});
        cout << rs[0].first << endl;
    }
}