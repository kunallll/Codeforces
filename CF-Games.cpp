#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<int> host, guest;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int h, a;
        cin >> h >> a;
        host.push_back(h);
        guest.push_back(a);
    }
    int count = 0;

    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            if (host[i] == guest[j]) count++;
        }
    }

    cout << count;

    return 0;
}