#include <iostream>
using namespace std;
void initialize( int& x, int& y, char& z);
void getHoursRate (double& hours, double& rate);
double paycheck (double rate, double hours);
void printcheck (double rate, double hours, double amount);
void funone(int& x , int & y);
void nextchar(char& z);
int main()
{
int x, y;
char z;
double rate, hours;
double amount;
initialize(x,y,z);
getHoursRate(hours, rate);
amount = paycheck(rate,hours);
printcheck(rate,hours,amount);
funone(x,y);
nextchar(z);
cout<<"x is "<<x;
cout<<" z is "<<z;
return 0;
}
void initialize( int& x, int& y, char& z)
{
x=0;
y=0;
z=' ';
}
void getHoursRat (double& hours, double& rate)
{
cout<<"Include hours:";
cin>>hours;
cout<<"Include rate:";
cin>>rate;
}
double paycheck(double rate, double hours)
{
	double amount;
    if (hours == 40)
{
	amount = 40 * rate;
	return amount;
}
	else
{
	amount = hours - 40 * 1.2;
	amount = rate * 40 + amount;
}
} 

void printcheck ( double hours, double rate, double amount)
{
	double salary;
	salary = amount;
	cout<<salary;
}
void funone( int x,int y)
{
	
	cout<<" enter value of x = ";
	cin>>x;
	cout<<" Enter value of y = ";
	cin>>y;
	

}
void nextchar(char& z)
{
   z++;
}
