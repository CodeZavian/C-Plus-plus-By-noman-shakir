#include<iostream>
#include<string>
using namespace std;
int main()
{
       string name = "noman";
       cout<<"the name = "<<name<<endl;
       // some function of string 
       cout<<"the length of name = " <<name.length()<<endl; // it print length of string name that is noman
       cout<<"the name is " <<name.substr(0,3)<<endl;  // 0 se 3 tak jo hain wo print kare ga
       cout<<"the name is " <<name.substr(2,5)<<endl;
       // string index =  0 1 2 3 4 .....
       return 0;
}