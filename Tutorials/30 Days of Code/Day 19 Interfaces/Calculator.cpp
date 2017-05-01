/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculator.cpp
 * Author: mario
 * 
 * Created on January 22, 2017, 2:43 AM
 */

#include <valarray>

#include "Calculator.h"

/**
 * All prime numbers before sqrt(1000)
 */
const int Calculator::primes[] = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

Calculator::Calculator(){}

int Calculator::divisorSum(int n) {
	int sum = 1;
	int primeIndex = 1;
	int quotient = n;
	int power = 0;
	
	while (quotient > 1 && primeIndex < 12) {
		if (quotient % this->primes[primeIndex] == 0) {
			power++;
			quotient /= this->primes[primeIndex];
		} else {
			sum *= this->primeDivisorSum(this->primes[primeIndex++], power);
			power = 0;
		}		
	}
	
	if (power != 0) {
		sum *= this->primeDivisorSum(this->primes[primeIndex], power);
		
	// If no dividend primes below 31 were found, quotient is a prime number.
	} else {
		sum *= n > 1 ? this->primeDivisorSum(quotient, 1) : 1;
	}
	
	return sum;
}

/**
 * Using algorithm from http://mathschallenge.net/library/number/sum_of_divisors
 * @param p a prime number
 * @param a number of times p can divide another number
 * @return the sum of divisors of p ^ a
 */
int Calculator::primeDivisorSum(int p, int a) {
	return ((int)std::pow(p, a + 1) - 1) / (p - 1);
}