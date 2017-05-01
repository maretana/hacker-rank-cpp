/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Book.h
 * Author: mario
 *
 * Created on December 26, 2016, 1:35 AM
 */

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book{
    protected:
        std::string title;
        std::string author;
    public:
        Book(std::string t,std::string a);
        virtual void display()=0;

};

#endif /* BOOK_H */

