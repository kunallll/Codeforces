#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int Alice = 0, Bob = 0, n;
        cin >> n;
        
        vector<int> points;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            points.push_back(x);
        }
        
        for (int i = 0; i < n; i += 2) {
            if (points[i] % 2 == 0) 
                Alice += points[i];
        }
        
        for (int j = 1; j < n; j += 2) {
            if (points[j] % 2) 
                Bob += points[j];
        }
        
        if (Alice > Bob) {
            cout << "Alice" << endl;
        }
        else if (Alice < Bob) {
            cout << "Bob" << endl;
        }
        else if (Alice == Bob){
            cout << "Tie" << endl;
        }
    }
    return 0;
}