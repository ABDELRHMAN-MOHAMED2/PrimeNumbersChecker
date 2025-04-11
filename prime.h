#include <iostream>
#include <cmath>
using namespace std;
 

int TrueInput (int mode ) 
{
  int Num , first=0 ;
    do  
    {
       cin >> Num ;
       if ( cin.fail() )
       {
          cin.clear();
          cin.ignore( 1000 ,'\n');
          cout << " please enter a number : ";

       }
       else if ( cin.peek() != '\n'  )
       {   
          cin.clear();
          cin.ignore( 1000 ,'\n');
          cout<<"please enter an integer number ";

       } 
       else if ( (Num < 0 || Num >= 3) && mode == 1)
       {
         
            cout<<"please enter an number 1 or 2  ";
          
       }
       else if (Num < 0 && mode == 2)
       {
          Num *= -1 ; 
          cout << "the number is negative so we will check the positive number " << Num << endl ;
          break ;
        }
        else if (Num < first && mode == 3)
        {
          cout << "the number is smaller than the first number please enter a number bigger than : ";
        }
       else 
          break;
    }while(true); 
return Num;
}

void Prime (int Num)
{  

  if (Num == 1)
  {   
    cout << "the 1 is not prime " << endl ;
    return ;
  }
  else if (Num == 2)
  { 
    cout << "the 2 is prime " << endl ;
    return ;
  } 
  else if (Num == 3)
  {
      cout << "the 3 is prime " << endl ;
      return ;
  }
  int sqrtNum = sqrt(Num) ;
  for (int i = 2 ; i <= sqrtNum ; i++)
    {
     if (Num % i == 0)
     {
       cout << "the " << Num << " is not prime " <<  endl ;
       break ;        
     } 
     else if (i == sqrtNum)
       cout << "the "<< Num << " is prime " << endl ;

    }
}