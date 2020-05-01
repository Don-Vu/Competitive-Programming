#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

    int a, b, EvenOrOdd;
    cin >> a;
    cin >> b;
    string Dictionary[9] = { "one", "two", "three", "four", "five", "six", "seven",
    "eight", "nine"
    };

    for (int n = a; n <= b; n++) {
        EvenOrOdd = n % 2;
        if (n >= 1 && n <= 9) {
            cout << Dictionary[n - 1] << endl;
            continue;
        }
        else if (n > 9) {
            switch (EvenOrOdd)
            {
            case 0:
                cout << "even" << endl;
                break;
            case 1:
                cout << "odd" << endl;
                break;
            }
        }
    }

}
