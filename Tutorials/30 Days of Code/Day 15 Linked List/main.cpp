// https://www.hackerrank.com/challenges/30-linked-list

#include <iostream>
using namespace std;

#include "Node.h"
#include "Solution.h"

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}