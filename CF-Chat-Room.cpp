#include <iostream>
#include <string>

using namespace std;

int main() {
    string str, hello = "hello";
    cin >> str;

    int index = 0, count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'h') {
            index = i;
            count++;
            break;
        }
    }

    for (int i = index + 1; i < str.size(); i++) {
        if (str[i] == 'e') {
            index = i;
            count++;
            break;
        }
    }

    for (int i = index + 1; i < str.size(); i++) {
        if (str[i] == 'l') {
            index = i;
            count++;
            break;
        }
    }

    for (int i = index + 1; i < str.size(); i++) {
        if (str[i] == 'l') {
            index = i;
            count++;
            break;
        }
    }

    for (int i = index + 1; i < str.size(); i++) {
        if (str[i] == 'o') {
            index = i;
            count++;
            break;
        }
    }


    if (count == 5) cout << "YES";
    else cout << "NO";

    return 0;
}