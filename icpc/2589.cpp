#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int N = 0;
    int W = 1;
    string s;
    while (cin >> s) {
        if (s == "#") break;
        vector<int> vec;
        loop(s.size(), i) {
            if (s[i] == 'n') {
                vec.push_back(N);
                i+=4;
            } else {
                vec.push_back(W);
                i+=3;
            }
        }
//        for(auto i : vec) cout << i;
//        cout << endl;
        vector<pair<int,int>> rs;
        if (vec.back()==N) { 
            rs.push_back({0,1});
        } else {
            rs.push_back({90,1});
        }
        if (vec.size() == 1) {
            cout << rs[0].first << endl;
            continue;
        }
        vec.pop_back();
        int den_max = 0;
        int exp = 1;
        while(vec.size()) {
            if (vec.back() == N) {
                rs.push_back({-90, pow(2,exp++)});
            } else {
                rs.push_back({90, pow(2,exp++)});
            }
            den_max = max(den_max, (int)pow(2,exp-1));
            vec.pop_back();
        }
        int ans_num=0;
        for(auto r:rs) {
            //cout << r.first << ',' << r.second << endl;
            int k = den_max/r.second;
            ans_num += r.first*k;
        }
        int f = gcd(ans_num, den_max);
        //cout << ans_num << ' ' << f << ' ' << den_max << endl;
        cout << ans_num/f;
        if (den_max == f) cout << endl;
        else cout << '/' << den_max/f << endl;
    }
}
