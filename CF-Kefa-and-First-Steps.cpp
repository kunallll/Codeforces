#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> steps;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        steps.push_back(x);
    }

    vector<int> lengths;
    int ln = 1, max = 1; 

    for (int i = 0; i < n - 1; i++) {
        if (steps[i] <= steps[i + 1])
            ln++;
        else {
            if (max < ln) 
                max = ln;
            ln = 1;
        }
        
    }
    if (ln > max) cout << ln;
    else cout << max;

    return 0;
}