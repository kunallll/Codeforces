#include <iostream>

int main() {
    long long n, fn = 0;

    std::cin >> n;

    if (n%2) std::cout << -(n+1)/2;
    else std::cout << n/2;

    return 0;
}