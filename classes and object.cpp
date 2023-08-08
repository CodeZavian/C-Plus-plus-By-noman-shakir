#include<iostream>
using namespace std;

class employee
{
      public:
      string name;
      int salary;
      //  Constructor if i want ka jab bi ak object bane emolyee type ha ak function run ho jae
      employee(string n,int s,int sp)  // isko hum change be kar sakte agay waala
      {
          this->name = n;
          this->salary = s;
          this->secretPass = sp;
      }

      // make a mehtod for our class 
      //this-> is the method to acces the object jis ka bare main bat ho rahi hab
      void PrintDetails()
      {
         
         cout<<"your name is " <<this->name<< " and salary = "<<this->salary<<endl;
      }

      void getsSrecretPass(){
          cout<<"the secret pass of employee is " <<this->secretPass;
      }


      private:
      int secretPass;
};

// Inheritance  karne se base class ki sari properties a jatien hain child class main
class Programmer : public employee
{
      public:
      int errors;

};



int main()
{
      employee nom("noman",19,12122);  // yeh uper ja print kare ga
    //   nom.name = "noman shaker";
    //   nom.salary = 100;
      nom.PrintDetails(); // calling
      nom.getsSrecretPass();
    //  cout<<secretPass;  you cant access it b/c it is private variable
    //   cout<<"your name is " <<nom.name<< " and salary = "<<nom.salary<<endl;

      
}