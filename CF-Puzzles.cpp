#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> puzzles;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        puzzles.push_back(x);
    }

    sort(puzzles.begin(), puzzles.end());

    int min = INT_MAX;

    for (int i = 0; i + n <= m; i++) {
        if (puzzles[i + n - 1] - puzzles[i] < min) min = puzzles[i + n - 1] - puzzles[i];
    }

    cout << min;

    return 0;
}