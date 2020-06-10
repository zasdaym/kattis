#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool transitWoes(int s, int t, int n, vi d, vi b, vi c) {
	for (int i=0; i<n; i++) {
		// add walking duration
		s += d[i];
		/* printf("walking for:\t%d\ttime: %d\n", d[i], s); */
		// find waiting duration because of bus interval
		int wait = (c[i] - (s%c[i])) % c[i];
		s += wait;
		/* printf("waiting for:\t%d\ttime: %d\n", wait, s); */
		// add bus duration
		s += b[i];
		/* printf("bus run for:\t%d\ttime: %d\n", b[i], s); */
		// immediately false if duration exceeds class time
		if (s > t) {
			return false;
		}
	}

	/* printf("arrived at:\t%d\n", s + d[n]); */
	if ((s + d[n]) > t) {
		return false;
	}

	return true;
}

int main() {
	int s, t, n;
	cin >> s >> t >> n;

	// input walking durations
	vi d;
	for (int i=0; i<=n; i++) {
		int x;
		cin >> x;
		d.push_back(x);
	}

	// input bus durations
	vi b;
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		b.push_back(x);
	}

	// input bus intervals
	vi c;
	for (int i=0; i<n; i++) {
		int x;
		cin >> x;
		c.push_back(x);
	}

	if (transitWoes(s, t, n, d, b, c)) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}

	return 0;
}

