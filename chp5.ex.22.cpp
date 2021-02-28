#include<iostream>
using namespace std;
int main ()
{
int num = 1; 
int count;
for (count = 0; count < 0; ++count)    
   {
    num = 2 * num + num % (count + 1); 
   }
cout << "num=" << num <<endl;
return 0;
}
