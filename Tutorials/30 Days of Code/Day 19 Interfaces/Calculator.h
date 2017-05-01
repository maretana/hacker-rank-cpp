/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Calculator.h
 * Author: mario
 *
 * Created on January 22, 2017, 2:43 AM
 */

#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "AdvancedArithmetic.h"


class Calculator : public AdvancedArithmetic {
public:
	Calculator();
	virtual int divisorSum(int n);
	
private:
	static const int primes[];
	int primeDivisorSum(int p, int a);
};

#endif /* CALCULATOR_H */

