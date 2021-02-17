#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        
        vector<int> candies;
        
        int count1 = 0, count2 = 0;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            // candies.push_back(x);
            if (x == 1) count1++;
            else if (x == 2) count2++;
        }
        
        if (count1 % 2 == 0 && count2 % 2 == 0) cout << "Yes";
        else cout << "No";
    }
    return 0;
}