#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<int> columns;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        columns.push_back(x);
    }

    sort(columns.begin(), columns.end());

    for (int i = 0; i < n; i++) cout << columns[i] << " ";
}