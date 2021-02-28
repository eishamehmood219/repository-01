#include<iostream>
using namespace std;
void fun(int n , int m)
{
int sum=0;
int avg=0;
int counter=0;
if(n<m)
	{
		for(int i =n ; n<=m ; n++)
		{
		sum= sum + i;
		counter++;
		}
	}
else
	{
		for(int i =m ; m<=n ; m++)
		{
		sum=sum+i;
		counter++;	
		}
	}
	
avg=sum / counter;

cout << "Sum="<< sum <<endl;
cout<< "Averge="<<  avg <<endl;
}
int main()
{
int a , b;
cout << "Enter the value n:";
cin >> a;
cout << "Enter the value m:";
cin>>b;
fun(a ,b);
return 0;
}
