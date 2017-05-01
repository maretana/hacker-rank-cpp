/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: mario
 *
 * Created on December 24, 2016, 8:29 PM
 */

#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person{
	protected:
		std::string firstName;
		std::string lastName;
		int id;
		
	public:
		Person(std::string firstName, std::string lastName, int identification);
		void printPerson();
	
};

#endif /* PERSON_H */

