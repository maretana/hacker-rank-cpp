// https://www.hackerrank.com/challenges/30-more-exceptions

#include <iostream>
#include <exception>
#include <stdexcept>
#include <stdio.h>
using namespace std;

#include "Calculator.h"

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}
