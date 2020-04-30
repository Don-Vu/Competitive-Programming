#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string Dictionary[9]{ "one", "two", "three", "four", "five", "six", "seven",
        "eight", "nine"
    };

    int index = n - 1;
    
    if (n >= 1 && n <= 9){
            cout << Dictionary[index];
    }
    else {
        cout << "Greater than 9";
    }
    return 0;
}
