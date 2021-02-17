#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    int len;
    string word;
    cin >> len;
    cin >> word;

    if (len < 26) cout << "NO";
    else {
        vector<int> Alphas (26, 0);
        for (int i = 0; i < len; i++) {
            int div = 0;
            if (isupper(word[i])) div = 65;
            else div = 97;

            Alphas[word[i] % div]++;
        }
        int flag = 1;
        for (int i = 0; i < 26; i++) {
            if (Alphas[i] < 1) {
                cout << "NO"; 
                flag = 0;
                break;
            }
        }

        if (flag == 1) cout << "YES";


    }
}