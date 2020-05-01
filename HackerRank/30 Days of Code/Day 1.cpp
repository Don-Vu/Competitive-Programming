#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int iSecond;
    double dSecond;
    string sSecond;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> iSecond;
    cin >> dSecond;
    cin.ignore();
    getline(cin, sSecond);
    // Print the sum of both integer variables on a new line.
    cout << i + iSecond << endl;
    // Print the sum of the double variables on a new line.
    printf("%.1f \n", (d + dSecond));
    // Concatenate and print the String variables on a new line
    cout << s << sSecond;
    // The 's' variable above should be printed first.

    return 0;