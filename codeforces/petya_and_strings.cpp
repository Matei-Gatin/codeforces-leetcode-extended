//
// Created by matt on 9/17/26.
//

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
        int c1 = tolower(static_cast<unsigned char>(s1[i]));
        int c2 = tolower(static_cast<unsigned char>(s2[i]));

        if (c1 < c2) {
            cout << -1 << "\n";
            return 0;
        }

        if (c1 > c2) {
            cout << 1 << "\n";
            return 0;
        }
    }

    cout << 0 << "\n";

    return 0;
}