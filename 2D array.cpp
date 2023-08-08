#include<iostream>
using namespace std;
int main()
{
      int arr2D[2][3] = { {2,3,5},{5,1,5} }; // 2d array 2 rows and 3 colombs 2x3

      for(int i=0;i</*rows*/2;i++)
      {
            for(int j=0;j</*colombs*/3;j++)
            {
                   cout<<"the value of "<<i<<","<<j<< " is "<<arr2D[i][j]<<endl;
            }
      }
      
      return 0;
}