#include <iostream>
#include "prime.h"
using namespace std ;

// TrueInput function to get a valid input from user 


/* TrueInput has 3 modes : 1 for
options , 2 for first number (and a 
single Number) , 3 for second number */ 

// prime() : check if the number is prime or not and print it 

int op, Num , first, second ;
int main ()
{
 cout << "prime checker  " << endl ;
 cout << "\n1.check only number \n2.for prime numbers between two number  " << endl ;
 op = TrueInput (1) ;
  
 if (op == 1) 
 {
    cout << "please enter a number you want to check : " ;
    Num = TrueInput (2) ;
    Prime (Num) ;
 }


   
 else if (op == 2)
 {
   cout << "enter the first number : " ;
   first = TrueInput (2)  ;
   cout << "enter the second number : " ;
   second = TrueInput (3) ; ;
   for (int i = first ; i <= second ; i++)
     {
       Prime (i) ;  
     } 
 }
   return 0 ;
}








