/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Person.h
 * Author: mario
 *
 * Created on December 22, 2016, 11:36 PM
 */

#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

#endif /* PERSON_H */

