#include<iostream>
using namespace std;
int main() {

	while (true) {
		int k, n, m;
		cin >> k >> n >> m;
		if (k == 0) break;
		else {
			for (int i = 0; i < k; ++i) {
				int a, b;
				cin >> a >> b;
				if (a == n || b == m) cout << "divisa" << endl;
				else if (a > n && b > m) cout << "NE" << endl;
				else if (a<n && b>m) cout << "NO" << endl;
				else if (a > n && b < m) cout << "SE" << endl;
				else if (a < n && b < m) cout << "SO" << endl;
			}
		}
	}
    return 0;
}