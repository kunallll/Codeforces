#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2) cout << "I hate ";
        else cout << "I love ";
        if (n > 1 && i != n) cout << "that ";
        if (i == n) cout << "it";
    }

    return 0;
}
