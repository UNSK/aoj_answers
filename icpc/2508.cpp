#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;


int main()
{
    vector<char> list(52, 0);
    char c = 'a';
    loop(26,i) list[i] = c+i;
    c = 'A';
    for(int i = 26; i<52; i++) list[i] = c+i-26;

    int n;
    while (cin >> n, n) {
        vector<int> k(n, 0);
        loop(n, i) cin >> k[i];
        string s; cin >> s;
        string ans = "";
        int ite = 0;
        for (auto c : s) {
            int i = distance(list.begin(), find(all(list), c));
            ans += i-k[ite] < 0 ?
                list[i-k[ite]+52] : list[i-k[ite]];
            ite = n==++ite? 0 : ite;
        }
        cout << ans << endl;
    }
}
