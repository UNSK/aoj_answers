#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        int ans = 0;
        for (int i = n; i <= 2*n; i++) {
            if (i == 1) continue;
            bool isPrime = true;
            for (int j = 2; j < sqrt(2*n); j++) {
                if (i == j) {
                    break;
                }
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

