#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>


std::unordered_map<std::string, long long> lookUpTable;
long long factorial(int n) {
	if(n == 0) {
		return 1;
	}
	else {
		if(lookUpTable.find(std::to_string(n)) != lookUpTable.end()) {
			return lookUpTable[std::to_string(n)];
		}
		else {
			long long ans = n * factorial(n-1);
			lookUpTable[std::to_string(n)] = ans;
			return ans;
		}
	}
	
}

long long digitFactorialSum(long long n) {
	int sum = 0;
	while(n > 0) {
		sum += factorial(n%10);
		n = n / 10;
	}
	return sum;
}

long long sumAll(int limit) {
	long long sum = 0;
	for(long long i = 3; i <= limit; ++i) {
		if(digitFactorialSum(i) == i) {
			sum += i;
			std::cout << i << "\n";
		}
	}
	return sum;
}

int main() {
	int user_in;
	std::cout << "enter limit):" << "\n";
	std::cin >> user_in;
	long long ans = sumAll(user_in);
	std::cout << user_in << "! sum = " << ans << "\n";
	return 0;
}
