#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;

    while (1) {
        n++;
        int d1 = (n - n%1000)/1000, d2 =  (n%1000 - n%100)/100, d3 = (n%100 - n%10)/10, d4 = n%10;
        if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) 
            break;
    }

    cout << n;

    return 0;
}