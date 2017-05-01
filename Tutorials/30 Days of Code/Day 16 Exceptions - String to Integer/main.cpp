// https://www.hackerrank.com/challenges/30-exceptions-string-to-integer

#include <string>
#include <iostream>

int main() {
	std::string S;
	std::cin >> S;
	
	try {
		
		// stoi needs C++11 compiler (-std=c++11)
		std::cout << std::stoi(S) << '\n';
		
	} catch (...) {
		std::cout << "Bad String" << '\n';
	}
	
	return 0;
}
