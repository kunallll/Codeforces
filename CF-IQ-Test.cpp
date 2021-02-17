#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, even = 0, odd = 0;
    cin >> n;
    vector<int> vec;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
        if (x % 2 == 0) even++;
        else odd++;
    }

    if (even > odd) {
        for (int i = 0; i < n; i++) {
            if (vec[i] % 2) {
                odd = i + 1;
            }
        }
        cout << odd;
    }

    else {
        for (int i = 0; i < n; i++) {
            if (vec[i] % 2 == 0) {
                even = i + 1;
            }
        }
        cout << even;
    }


    return 0;
}