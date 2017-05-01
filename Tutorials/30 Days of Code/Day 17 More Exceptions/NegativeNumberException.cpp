/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NegativeNumberException.cpp
 * Author: mario
 * 
 * Created on December 29, 2016, 6:41 AM
 */

#include "NegativeNumberException.h"

NegativeNumberException::NegativeNumberException()
	: runtime_error("n and p should be non-negative") {
}
