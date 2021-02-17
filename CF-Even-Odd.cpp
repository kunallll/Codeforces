#include <iostream>
#include <vector>

int main() {
    long long n, k;
    std::cin >> n >> k;

    if (n%2) {
        if (k <= n/2 + 1) std::cout << 2*k - 1;
        else std::cout << 2*(k-n/2) - 2;
    }
    else {
        if (k <= n/2) std::cout << 2*k - 1;
        else std::cout << 2*(k - n/2);
    }
    
    return 0;
}