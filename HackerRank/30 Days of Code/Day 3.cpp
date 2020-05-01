#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;


int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int EvenOrOdd = abs(N) % 2;

    if (EvenOrOdd == 1) {
        cout << "Weird";
    }
    else if (EvenOrOdd == 0) {
        if (N >= 2 && N <= 5) {
            cout << "Not Weird";
        }
        else if (N >= 6 && N <= 20) {
            cout << "Weird";
        }
        else if (N > 20) {
            cout << "Not Weird";
        }
    }

    return 0;
}
