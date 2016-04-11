#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;


int main()
{
    int n;
    while (cin >> n, n) {
        vector<pair<string, float>> crops;
        loop (n, i) {
            string name;
            int p, a, b, c, d, e, f, s, m;
            cin >> name >> p >> a >> b >> c >> d >> e >> f >> s >> m;
            int time = 0, gain = -p;
            time = a + b + c;
            loop(m, j) {
                time += d + e;
                gain += f * s;
            }
            crops.push_back(make_pair(name, (float)gain/time));
        }

        sort(all(crops),
                [](pair<string, float> p1, pair<string, float> p2) -> int {
                    if (islessgreater(p1.second, p2.second)) {
                        return isgreater(p1.second, p2.second);
                    } else {
                        p1.first < p2.first;
                    }
                });
        for (auto m : crops) {
            cout << m.first << endl;
        }

        cout << '#' << endl;
    }
}
