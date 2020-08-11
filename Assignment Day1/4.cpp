#include <bits/stdc++.h>

using namespace std;

double x[3];
double y[3];

int main() {
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }
    double A = 0.0;
    for (int i = 0; i < 3; i++) {
        A += x[i] * y[(i + 1) % 3];
        A -= y[i] * x[(i + 1) % 3];
    }
    A /= 2.0;
    if (A < 0) A *= (-1.);
    cout << A;
}
