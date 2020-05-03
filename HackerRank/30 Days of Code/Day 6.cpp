#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int T;
    string S, holding;
    cin >> T;
    cin.ignore();

    for (int x = 0; x <= T; x++) {
        vector <string> Letters, Even, Odd;
        for (int i = 0; i < S.length(); i++) {
            holding = S[i];
            Letters.push_back(holding);
        }

        for (int i = 0; i < Letters.size(); i++) {
            int EvenOrOdd = (i % 2);
            switch (EvenOrOdd) {
            case 0:
                Even.push_back(Letters[i]);
                break;
            case 1:
                Odd.push_back(Letters[i]);
                break;
            }
        }

        for (int i = 0; i < Even.size(); i++) {
            cout << Even[i];
        }

        cout << " ";

        for (int i = 0; i < Odd.size(); i++) {
            cout << Odd[i];
        }

        cout << endl;
    }

}