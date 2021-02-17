#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;
    int exp1 = a + b + c, exp2 = (a + b) * c, exp3 = a * (b + c), exp4 = a * b * c;

    if (exp1 > exp2 && exp1 > exp3 && exp1 > exp4) {
        cout << exp1;
    }
    else if (exp2 > exp3 && exp2 > exp4) {
        cout << exp2;
    }
    else if (exp3 > exp4) {
        cout << exp3;
    }
    else {
        cout << exp4;
    }

    return 0;
}