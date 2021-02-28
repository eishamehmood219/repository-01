#include <iostream>
using namespace std;
int main()
{
	 long long num = 5; 
	 int i;
    for (i = 1; i < 3; i++) 
	   {    
	     num = num + num * (num - i);    
		 cout << num << " "; 
		} 
	cout << endl; 
	return 0;
}
