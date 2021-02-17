#include <iostream>
#include <vector>

using namespace std;

int main() {
    double n, xMl = 0;
    cin >> n;
    vector<int> drinks;

    for (int i = 0; i < n; i++) {
        double x; cin >> x;
        xMl += (x/100);
    }

    cout << (xMl / n) * 100;

    return 0;
}