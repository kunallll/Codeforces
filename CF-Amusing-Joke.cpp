#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string name1, name2, shuffledWords;
    cin >> name1 >> name2 >> shuffledWords;
    unordered_map<char, int> dict;

    for (int i = 0; i < name1.size(); i++) {
        dict[name1[i]] += 1;
    }

    for (int i = 0; i < name2.size(); i++) {
        dict[name2[i]] += 1;
    }

    for (int i = 0; i < shuffledWords.size(); i++) {
        dict[shuffledWords[i]] -= 1;
    }

    int flag = 1;

    for (auto d: dict) {
        if (d.second != 0) {
            cout << "NO";
            flag = 0;
            break;
        }
    }

    if (flag == 1) cout << "YES";

    return 0;
}