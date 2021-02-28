#include <iostream>
using namespace std;

void initializes(int& x, int& y, char& z)
{
	x=0;
	y=0;
	z=' ';
 } 
 void getHoursRate(double& rate , double& hours)
 {
 	cout<<"Enter the hourly Rate : ";
 	cin>>rate;
 	cout<<"Enter the hours worked :";
	cin>>hours; 	
 }
 double payCheck(double rate , double hours)
 {
 	double amount=0;
 	if (hours>40)
 	{
 		amount=amount+((hours-40)*rate)*1.5;
 		amount=amount+40*rate;
 		return amount;
	 }
	 else
	 {
	 	amount=hours*rate;
	 	return amount;
	 }
 }
 void printCheck(double rate , double hours , double amount)
 {
 	cout << "For Working "<< hours << "hours at $ "<< rate << " you get total $"<<amount << " amount. "<<endl;
 }
 void funcOne(int& x , int y)
 {
 	int num;
 	cout << "Enter a number:";
 	cin>>num;
 	x=(x*2)+y-num;
 }
 void nextChar(char& z)
 {
 	z++;
 }
 
 
 int main()
 {
 	int x , y ;
 	char z;
 	double rate , hours;
 	double amount;
 	getHoursRate(rate , hours);
 	amount=payCheck(rate , hours);
 	printCheck(rate , hours , amount);
 	initializes(x ,y , z);
 	cout <<"The value of x is currently: "<< x << endl;
 	funcOne(x , y);
 	cout << "The value of x is now : "<< x <<endl;
 	nextChar(z);
 	cout << "The value of z is now : "<< z << endl;
 	return 0;
 	
 }
 
 
 
 
 
 
 
 
 
 
