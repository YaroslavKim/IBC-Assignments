#include <bits/stdc++.h>

using namespace std;

int amount[6];

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int grade;
        cin >> grade;
        amount[grade]++;
    }
    if (amount[2] >= 1) {
        cout << "drop";
        return 0;
    }
    int stipend = 12000;
    if (amount[3] == 0 && amount[4] > 0) stipend = 18000;
    if (amount[3] == 0 && amount[4] <= 2) stipend = 24000;
    if (amount[5] == n) stipend = 36000;
    cout << stipend;
}
