/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solution.cpp
 * Author: mario
 * 
 * Created on December 28, 2016, 4:39 AM
 */

#include <iostream>

#include "Solution.h"
#include "Node.h"

Node* Solution::insert(Node* head, int data)
{
	Node* newNode = new Node(data);
	
	if (head){
		Node* last = head;
		
		while (last->next) {
			last = last->next;
		}
		
		last->next = newNode;
		return head;
	
	} else {
		return newNode;
	}
}

void Solution::display(Node* head)
{
	Node *start=head;
	while(start)
	{
		std::cout<<start->data<<" ";
		start=start->next;
	}
}