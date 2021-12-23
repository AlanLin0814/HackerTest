#include <iostream>
using namespace std;
static inline bool is_base64(unsigned char c) {
	return (isalnum(c) || (c == '+') || (c == '/'));
}
int main() {
	char a;
	cin >> a;
	cout << is_base64(a) << endl;
	return 0;
}