#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;
#define SQR(x) ((x)*(x))

int main(void) {
    int n;
    cin >> n;
    while (n--) {
        double x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        double a = x1 - x2;
        double b = y1 - y2;
        double c = - 1 * (SQR(x1) - SQR(x2) + SQR(y1) - SQR(y2));
        double d = x1 - x3;
        double e = y1 - y3;
        double f = - 1 * (SQR(x1) - SQR(x3) + SQR(y1) - SQR(y3));

        double l = (c * e - b * f) / (e * a - b * d);
        double m = (d * c - a * f) / (d * b - e * a);

        double n = -1 * (SQR(x1) + SQR(y1) + l * x1 + m * y1);

        cout << fixed << setprecision(3)
             << l / -2 << " "
             << m / -2 << " "
             << sqrt(SQR(l) + SQR(m) - 4 * n) / 2 << endl;
    }
}
