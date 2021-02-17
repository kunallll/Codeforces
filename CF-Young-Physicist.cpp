#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;

    int body1 = 0, body2 = 0, body3 = 0;

    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        body1 += a;
        body2 += b;
        body3 += c;
    }

    if (body1 == 0 && body2 == 0 && body3 == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    return 0;
}