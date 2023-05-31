#include <iostream>
#include <string>
#include <vector>

using namespace std;

void computeLPS(const string& str, int* lps) {
    int j = 0;
    lps[0] = 0;
    for (int i = 1; i < str.size(); i++) {
        while (j > 0 && str[i] != str[j]) {
            j = lps[j - 1];
        }
        if (str[i] == str[j]) {
            j++;
        }
        lps[i] = j;
    }
}

bool isKPeriodic(const string& str, int k) {
    vector<int> lps(str.size());
    computeLPS(str, lps.data());

    if (k == str.size() - lps[str.size() - 1])
    {
        cout << "the string is a multiple of k" << endl;
        return true;
    }
    else
    {
        cout << "the string is NOT multiple of k!" << endl;
        return false;
    }
}


int main() {
    string str;
    int k;

    while (true) {
        cout << "Input your string or 0 for exit" << endl;
        cin >> str;

        if (str == "0") {
            return false;
        }

        do {
            cout << "input k for checking string:" << endl;
            cin >> k;

            if (k <= 0) {
                cout << "k must be more than 0!" << endl;
            }
        } while (k <= 0);

        isKPeriodic(str, k);
    }
    return 0;
}


