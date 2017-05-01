/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.h
 * Author: mario
 *
 * Created on December 24, 2016, 8:29 PM
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>

#include "Person.h"

class Student :  public Person{

	private:
		std::vector<int> testScores;  
	public:
  		// Write your constructor
		Student(std::string firstName, std::string lastName, int identification, std::vector<int> testScores);
  
  		// Write char calculate()
		char calculate();
};

#endif /* STUDENT_H */

