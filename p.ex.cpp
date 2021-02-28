#include <iostream>
using namespace std;

void func (int & n , int & m )

{
	int sum = 0;
	int num = 0;
	int aveg =  0;
	
	cout << " Enter the value of n = ";
	cin >> n;
	cout << endl;
	 
	cout << " Enter the value of m = ";
	cin >> m;
	cout << endl;
	
	if (n < m)
	{
		for ( int i = n; i <= m; i++)
		   {
		    sum = sum + i;
		    num = num + 1;
		    
		    		 			  
	 
		  }
	}
	else if ( m < n)
	    for (int j = m; j <= n; j++)
	      {
			sum = sum + j;
		    num = num + 1;;
		    
		  }
	else
	    cout << " Invalid input ";
    
            aveg = sum / num;
            cout << " average " << aveg << endl;
            cout << " sum =  " << sum;
    
}                   
int main()
{
   int a = 0;
   int b = 0;
   
   func (a, b);
    	
   
}
