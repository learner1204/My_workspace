/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   //0 1 1 2 3 5 8 ......
   int f =0;
   int s=1;
   int x =f + s;
   
   cout << f<<endl <<s << endl <<x << endl;
   for(int i=1; i< 3; i++)
    {
        f = s;
        s = x;
        x = f + s;
        cout << x << endl;     
    }   
   
   
   
   
   
   return 0;
}  
