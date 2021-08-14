#include <bits/stdc++.h>
using namespace std;

#define int long long 

int32_t main () {
	int n, k; cin >> n >> k;
	priority_queue <int> pq;
	for (int i = 0; i < n; i++) {
		int qtype; cin >> qtype;
		if (qtype == 1) {
			int x, y; cin >> x >> y;
			pq.push(x*x + y*y);
		} else {
			while (pq.size() != k) {
				pq.pop();
			}
			cout << pq.top() << "\n";
		}
	}
	return 0;
}
