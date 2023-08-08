#include<iostream>
using namespace std;
int main()
{    
      int age = 19;
      int *ptr;
      ptr = &age;  // age ka address store kr do ptr main
            // if we use ptr it print address and *ptr print value at that address 
      cout<<"the age usin *ptr = " <<*ptr<<endl;
      cout<<"the age  = " <<age<<endl;
      cout<<"the address of age  = " <<ptr<<endl;
      cout<<"the address of age  = " <<&age<<endl;
      return 0;
      
}