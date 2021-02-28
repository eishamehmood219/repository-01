#include <iostream>
using namespace std;
int main()
{

int num; int sum;
cin >> num; sum = num;
while (num != -1) 
   {    
    sum = sum + num * (num - 1);    
    cin >> num;
   } 
 
 cout << "Sum = " << sum << endl;
 return 0;
 
}
