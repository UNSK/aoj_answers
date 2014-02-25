#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	double a, b, c, d, e, f;
	vector<double> x, y;
	while (cin >> a) {
		double tmpY;
		cin >> b >> c >> d >> e >> f;
		if (a*e != b*d) {
			y.push_back((c*d - a*f) / (b*d - a*e));
			tmpY = (c*d - a*f) / (b*d - a*e);
		} else {
			continue;
		}
		if (a != 0) {
			x.push_back((c - b*tmpY) / a);
		} else if (d != 0) {
			x.push_back((f - e*tmpY) / d);
		} else {
			continue;
		}
	}

	for (int i = 0; i < x.size(); i++) {
		cout << fixed << setprecision(3) << x[i] << " " << y[i] << endl;
	}
}