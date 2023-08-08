#include<iostream>
using namespace std;
int main()
{
    //     int arr[3] = {2,3,4}; // 3 size k aarray ha jis main number store hain
    //  // array index = 0 1 2
    //     cout<<arr[2];
    int mark[6];

    for(int i=0;i<6;i++)
    {
            cout<<"enter mark of "<<i<<"th student"<<endl;
            cin>>mark[i];
    }
    // now print the marks value
    for(int i=0;i<6;i++)
    {
         cout<<"mark of "<<i<<"th student = "<<mark[i]<<endl;
    }
    return 0;
}