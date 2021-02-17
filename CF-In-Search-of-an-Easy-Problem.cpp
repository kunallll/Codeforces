#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int flag = 1;

    for (int i = 0; i < n; i++) {
        int response;
        std::cin >> response;
        if (response == 1) {
            flag = 0;
        }
    }

    if (flag == 0) std::cout << "HARD";
    else std::cout << "EASY";

    return 0;
}