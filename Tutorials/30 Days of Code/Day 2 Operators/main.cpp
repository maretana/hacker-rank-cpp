// https://www.hackerrank.com/challenges/30-operators

#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    float mealCost;
    int tipPercent;
    int taxPercent;
	
	float tip;
	float tax;
	float totalCost;
    
    // Read and save numbers.
	cin >> mealCost;
	cin >> tipPercent;
	cin >> taxPercent;
    
    tip = mealCost * ((float)tipPercent / 100.00);
	tax = mealCost * ((float)taxPercent / 100.00);
	totalCost = mealCost + tip + tax;
	
	printf("The total meal cost is %i dollars.\n", (int)round(totalCost));
	
	return 0;
}
