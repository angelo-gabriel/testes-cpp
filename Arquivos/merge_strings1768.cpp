#include <bits/stdc++.h>
using namespace std;

int main() {
    string word1, word2;
    cin >> word1 >> word2;
    int m = word1.size();
    int n = word2.size();
    string result = "";
    int i = 0, j = 0;

    while (i < m || j < n) {
        if (i < m) {
            result.push_back(word1[i++]);
        }
        if (j < n) {
            result.push_back(word2[j++]);
        }
    }
    cout << result << endl;
    return 0;
}