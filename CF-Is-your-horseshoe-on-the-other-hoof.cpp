#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> shoes;

    for (int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        shoes.push_back(x);
    }

    sort(shoes.begin(), shoes.end());

    int count = 0;

    for (int i = 0; i < 3; i++) {
        if (shoes[i] == shoes[i + 1]) count++;
    }

    cout << count;

    return 0;       
}