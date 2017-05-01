/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NegativeNumberException.h
 * Author: mario
 *
 * Created on December 29, 2016, 6:41 AM
 */

#ifndef NEGATIVENUMBEREXCEPTION_H
#define NEGATIVENUMBEREXCEPTION_H

#include <stdexcept>

class NegativeNumberException : public std::runtime_error {
	public:
		NegativeNumberException();
};

#endif /* NEGATIVENUMBEREXCEPTION_H */

