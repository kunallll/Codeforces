#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int a, b;
        cin >> a >> b;

        if (a < b) cout << b - a << endl;
        else if (a % b == 0) cout << 0 << endl;
        else cout << ((a / b) + 1) * b - a  << endl;
    }
}