#include <iostream>
int gcd(int a, int b);
int main() {
	
	int a, b = 1;
	std::cout << "Enter int 'a':\n";
	std::cin >> a;
	std::cout << "Enter int 'b':\n";
	std::cin >> b;

	int ans = gcd(a, b);
	std::cout << "gcd: " << ans << "\n";
	
	return 0;
}

int gcd(int a, int b) {
	int b_temp;
	while(b != 0) {
		b_temp = b;
		b = a % b;
		a = b_temp;
	}

	return a;
}
