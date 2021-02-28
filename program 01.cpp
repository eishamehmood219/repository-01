#include <iostream>
//#include <cmath>
using namespace std;

int main()
{
	int firstNum, secondNum;
	int sumOfOdd=0;
	int sumOfEven=0;
	cout<<"The first number must be less then second number."<<endl;
	cout <<"Enter First number:";
	cin>>firstNum;
	cout<<endl;
	cout <<"Enter Second Number:";
	cin>>secondNum;
	cout<<endl;
	for(int i = firstNum;i<=secondNum; i++)
	{
		if(i%2!=0)
		{
		 cout<<"Odd Numbers between "<<firstNum<<" and "<<secondNum<<":"<<i<<" "<<endl;
	    }
	}
	for(int i=firstNum;i<=secondNum;i++)
	{
		//int sumOfEven=0;
		if(i%2==0)
		{
		sumOfEven=sumOfEven+i;
		}
	}

		cout<<"Sum of all Even numbers between "<<firstNum<<" and "<<secondNum<<":"<<sumOfEven<<endl;
    
	for(int i=firstNum;i<=secondNum;i++)
	{
		//int sumOfOdd=0;
		if(i%2!=0)
		{
		sumOfOdd=sumOfOdd+i*i;
        }
     }
	
	cout<<"Sum of the suqare of all odd numbers between "<<firstNum<<" and "<<secondNum<<":"<<sumOfOdd<<endl;

     cout<< "output the numbers and their suqare between 1 and 10."<<endl;
	for(int i=1;i<=10;i++)
	{
		cout<<"Square of Number "<<i<<" is:"<<i*i<<endl;
	}
	return 0;
}

