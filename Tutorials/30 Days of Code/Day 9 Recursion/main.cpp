// https://www.hackerrank.com/challenges/30-recursion

#include <iostream>
using namespace std;

// I know, it's to practice recursion and this is iteration, who cares!?
int factorial (int number) {
	int result = number;
	int count = number - 1;
	
	do {
		result *= count--;
	} while (count > 1);
	
	return result;
}


int main(){
    int n;
	cin >> n;
	
	cout << factorial(n) << '\n';
	
    return 0;
}
