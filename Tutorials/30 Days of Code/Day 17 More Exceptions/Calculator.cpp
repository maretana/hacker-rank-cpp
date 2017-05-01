/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculator.cpp
 * Author: mario
 * 
 * Created on December 29, 2016, 6:26 AM
 */

#include <cmath>

#include "Calculator.h"
#include "NegativeNumberException.h"

Calculator::Calculator() {
}

int Calculator::power(int n, int p) {
	if (n < 0 || p < 0) {
		throw NegativeNumberException();
	} else {
		return (int)std::pow(n,p);
	}
}
