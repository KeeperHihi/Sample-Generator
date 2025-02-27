#include <bits/stdc++.h>
using namespace std;

vector<int> ten = {
    1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000
};

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

void Generate_Array(int n, int upper = ten[5]) {
    for (int i = 0; i < n; i++) {
        cout << rng() % upper + 1 << " \n"[i == n - 1];
    }
}

int Generate_Int(int upper = ten[5]) {
    return rng() % upper + 1;
}

int main() {
	int n = rng() % 100000 + 1;
	cout << n << endl;
	for (int i = 0; i < n; i++) {
		cout << rng() % 2 << " \n"[i == n - 1];
	}
    return 0;
}
