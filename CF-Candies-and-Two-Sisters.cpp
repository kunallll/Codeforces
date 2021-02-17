#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long n;
        cin >> n;
        if (n == 1 || n == 2 || n == 0) cout << 0 << endl;
        else if (n % 2) cout << (n - 1) / 2 << endl;
        else cout << n / 2 - 1 << endl;
    }

    return 0;
}