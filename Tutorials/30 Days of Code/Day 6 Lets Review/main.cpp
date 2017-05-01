// https://www.hackerrank.com/challenges/30-review-loop

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
	int test_cases;
	
	cin >> test_cases;
	for (int i = 0; i < test_cases; i++) {
		string word;
		string odd_letters = "";
		string even_letters = "";
		cin >> word;
		int word_length = word.length();
		
		for (int j = 0; j < word_length; j++) {
			
			if (j % 2 == 0) {
				even_letters += word[j];
			} else {
				odd_letters += word[j];
			}
			
		}
		
		cout << even_letters + " " + odd_letters + "\n";
	}
	
    return 0;
}
