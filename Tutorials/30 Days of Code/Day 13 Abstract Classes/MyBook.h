/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyBook.h
 * Author: mario
 *
 * Created on December 26, 2016, 1:39 AM
 */

#ifndef MYBOOK_H
#define MYBOOK_H

#include <string>

#include "Book.h"

class MyBook : Book {
private:
	int price;
public:
	MyBook(std::string title, std::string author, int price);
	void display();
};

#endif /* MYBOOK_H */

