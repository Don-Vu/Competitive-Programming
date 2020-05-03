#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int T;
	cin >> T;

	for (int i = 0; i <= T; i++) {
		string S, Odd, Even;
		cin >> S;
		for (int n = 0; n < S.length(); n++) {
			n % 2 == 1 ? Odd += S[n] : Even += S[n];
		}
		cout << Even << " " << Odd << endl;
	}
}