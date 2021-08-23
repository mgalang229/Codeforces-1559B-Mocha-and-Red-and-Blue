#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			// count the number of letters
			cnt += (s[i] != '?');
		}
		if (!cnt) {
			// if there are no letters, set the first letter to 'R'
			s[0] = 'R';
		}
		// view the image in this repository for better understanding
		// create pattern wherein the question marks depend on the letter from the left adjacent side
		for (int i = 1; i < n; i++) {
			if (s[i] == '?' && s[i - 1] != '?') {
				s[i] = s[i - 1] ^ ('B' ^ 'R');
			}
		}
		// create pattern wherein the question marks depend on the letter from the right adjacent side
		for (int i = n - 2; i >= 0; i--) {
			if (s[i] == '?' && s[i + 1] != '?') {
				s[i] = s[i + 1] ^ ('B' ^ 'R');
			}
		}
		cout << s << '\n';
	}
	return 0;
}
