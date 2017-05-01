/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.h
 * Author: mario
 *
 * Created on December 28, 2016, 4:39 AM
 */

#ifndef SOLUTION_H
#define SOLUTION_H

// Forward declared dependency.
// No need to add Node.h since we only use a pointer.
class Node;

class Solution{
    public:
		Node* insert(Node *head,int data);
		
		void display(Node *head);
};

#endif /* SOLUTION_H */

