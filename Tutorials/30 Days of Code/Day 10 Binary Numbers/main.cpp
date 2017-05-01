// https://www.hackerrank.com/challenges/30-binary-numbers

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

string toStringBinaryForm (int number) {
	string binaryForm = "";
	int remainder;
	int quotient = number;
	
	while (quotient > 0) {
		ostringstream convert;
		
		remainder = quotient % 2;
		quotient = quotient / 2;
		
		convert << remainder;
		binaryForm = convert.str() + binaryForm;
	}
	
	if (number == 0) {
		binaryForm = '0';
	}
	
	return binaryForm;
}

int countMaxConsecutiveOnes(string binaryNumber) {
	int currentCount = 0;
	int result = 0;
	
	for (unsigned int i = 0; i < binaryNumber.length(); i++) {
		char digit = binaryNumber[i];
		if (digit == '0') {
			result = max(currentCount, result);
			currentCount = 0;
		} else {
			currentCount++;
		}
	}
	
	result = max(currentCount, result);
	
	return result;
}


int main(){
    int n;
	cin >> n;
	
	cout << countMaxConsecutiveOnes(toStringBinaryForm(n)) << '\n';
	
    return 0;
}
