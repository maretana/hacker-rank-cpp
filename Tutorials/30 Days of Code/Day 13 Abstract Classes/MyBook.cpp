/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyBook.cpp
 * Author: mario
 * 
 * Created on December 26, 2016, 1:39 AM
 */

#include <iostream>

#include "MyBook.h"

MyBook::MyBook(std::string title, std::string author, int price) :
	Book(title, author), price(price) {}

void MyBook::display() {
	std::cout << "Title: " << this->title << '\n';
	std::cout << "Author: " << this->author << '\n';
	std::cout << "Price: " << this->price << '\n';
}
