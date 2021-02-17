#include <iostream>

using namespace std;

int main() {
    long n;
    cin >> n;

    int count = 0;

    while (n) {
        int div;
        if (n >= 100) div = 100;
        else if (n >= 20) div = 20;
        else if (n >= 10) div = 10;
        else if (n >= 5) div = 5;
        else div = 1;

        count += n/div;
        n -= ((n/div) * div);
    }

    cout << count;
}