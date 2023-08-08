#include<iostream>
using namespace std;

// using addition function
int add(int a,int b);
int main()
{
    int a,b;
    cout<<"enter the values"<<endl;
    cin>>a>>b;// input
  //  int c = ; // call
    cout<<"sum of a and b = "<< add(a,b); // calling the function
    return 0;   
}
int add(int a,int b)
{
       int c = a+b;
        return c;
}