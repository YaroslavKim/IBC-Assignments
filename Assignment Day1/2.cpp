#include <bits/stdc++.h>

using namespace std;

int get_number(char c) {
    if(c == 'I') return 1;
    if(c == 'V') return 5;
    if(c == 'X') return 10;
    if(c == 'L') return 50;
    if(c == 'C') return 100;
    if(c == 'D') return 500;
    if(c == 'M') return 1000;
}

int main() {
    string s;
    cin >> s;
    int number = 0;
    int cur_max = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        int cur = get_number(s[i]);
        if (cur >= cur_max) {
            cur_max = cur;
            number += cur;
        } else {
            number -= cur;
        }
    }
    cout << number;
}
