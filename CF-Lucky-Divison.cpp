#include <iostream>

int main() {
    int n;
    std::cin >> n;
    
    if (n % 4 == 0 || n % 7 == 0) {
        std::cout << "YES";
    }
    else {
        int size = 0, sizeln = 0;
        while (n) {
            int r = n%10;
            if (r == 4 || r == 7) sizeln++;
            size++;
            n /= 10;
        }
        if (size == sizeln) std::cout << "YES";
        else std::cout << "NO";
    }
    
    return 0;
}