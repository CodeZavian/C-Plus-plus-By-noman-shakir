#include<iostream>
using namespace std;
int main()
{     // program for prime number
      int number;
      cout<<"enter the number"<<endl;
      cin>>number;
      int i=1;
      int c=0;
      while(i<=number)
      {   
       
        if(number%i==0)
        {
               c++;
        }
         i++;
      }
      if(c==2)
      {
             cout<<"prime number"; 
      }
      else{
           cout<<"composite no";
      }
      return 0;
}
