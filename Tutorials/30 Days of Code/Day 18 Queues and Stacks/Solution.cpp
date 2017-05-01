/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: mario
 * 
 * Created on January 15, 2017, 1:43 AM
 */

#include "Solution.h"

Solution::Solution() {
	
}

void Solution::enqueueCharacter(char c) {
	this->_queue.push(c);
}

char Solution::dequeueCharacter() {
	return this->_queue.front();
}

void Solution::pushCharacter(char c) {
	this->_stack.push(c);
}

char Solution::popCharacter() {
	return this->_stack.top();
}
