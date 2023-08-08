#include<iostream>
using namespace std;
int main()
{
      int a,b;
      int choice;
      cout<<"enter two numbers"<<endl;
      cin>>a>>b;  // we can input at same time
      cout<<"enter your choise \n 1 for addition \n 2 for substraction \n 3 for multiplication \n 4 for division"<<endl;
      cin>>choice;  // we can use \n but use best is endl

      switch(choice)
      {
          case 1:
          cout<<"the sum of a + b = "<<a+b<<endl; // ab yeh result ka baad print kare ga
          break;  // agar ap sare print krna cha rahe hain to break hata dein and agar if you want skip some case use break
          case 2:
          cout<<"the sum of a - b = "<<a-b;
          break;
          case 3:
          cout<<"the sum of a * b = "<<a*b;
          break;
          case 4:
          cout<<"the sum of a / b = "<<(float)a/b;
          break;
          default:
          cout<<"your enter wrong choice";
          break;

      }


}
