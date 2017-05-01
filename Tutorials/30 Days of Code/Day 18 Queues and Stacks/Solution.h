/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: mario
 *
 * Created on January 15, 2017, 1:43 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

#include <queue>
#include <stack>



class Solution {
public:
	Solution();
	
	/**
	 * A void pushCharacter(char ch) method that pushes a character onto a stack.
	 * @param c
	 */
	void pushCharacter(char c);
	
	/**
	 * A void enqueueCharacter(char ch) method that enqueues a character in the queue instance variable.
	 * @param c
	 */
	void enqueueCharacter(char c);
	
	/**
	 * A char popCharacter() method that pops and returns the character at the top of the stack instance variable.
	 * @return Returns the character at the top of the stack instance variable.
	 */
	char popCharacter();
	
	/**
	 * A char dequeueCharacter() method that dequeues and returns the first character in the queue instance variable.
	 * @return Returns the first character in the queue instance variable.
	 */
	char dequeueCharacter();
	
private:
	// Two instance variables: one for your stack, and one for your queue.
	std::queue<char> _queue;
	std::stack<char> _stack;

};

#endif /* SOLUTION_H */

