#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int total_capacity, total_occupancy;
        cin >> total_occupancy >> total_capacity;

        if (total_capacity - total_occupancy >= 2) count++; 
    }

    cout << count;

    return 0;
}