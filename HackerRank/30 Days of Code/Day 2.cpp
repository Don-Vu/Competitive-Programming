#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.


void solve(double meal_cost, double tip_percent, double tax_percent, double totalCost) {
    totalCost = (meal_cost + meal_cost * (tip_percent/100)) + (meal_cost * (tax_percent/100));
    printf("%.0f", totalCost);
}

int main()
{
    double meal_cost;
    cin >> meal_cost;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double tip_percent;
    cin >> tip_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double tax_percent;
    cin >> tax_percent;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    double totalCost;

    solve(meal_cost, tip_percent, tax_percent, totalCost);

    return 0;
}
