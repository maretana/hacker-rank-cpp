// https://www.hackerrank.com/challenges/30-loops

#include <iostream>
#include "stdio.h"

using namespace std;


int main(){
    int n;
    cin >> n;
	
	for (int i=1; i <= 10; i++) {
		int x = n * i;
		printf("%i x %i = %i\n", n, i, x);
	}
	
    return 0;
}

