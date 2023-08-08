#include<iostream>
using namespace std;
int main()
{
      int age;
      cout<<"enter your age"<<endl;  //\n be use kar sakte c++ main "\n"  ka andar last ma
      cin>>age;// input age
      if(age>150)
      {
         cout<<"invalid age";
      }
      else if(age>=18)
      {
         cout<<"you can vote";
      }
      
      else{
          cout<<"you can not vote";
      }

}