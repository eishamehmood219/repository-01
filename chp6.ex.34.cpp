#include <iostream>            
using namespace std;                                 //Line 2
void funOne(int& a);                                 //Line 3
int main()                                           //Line 4 
{                                                    //Line 5    
int num1, num2;                                  //Line 6
num1 = 10;                                       //Line 7
num2 = 20;                                       //Line 8
cout << "Line 9: In main: num1 = " << num1<< ", num2 = " << num2 << endl;             //Line 9
funOne(num1);                                    //Line 10    
cout << "Line 11: In main after funOne: num1 = "<< num1 << ", num2 = " << num2 << endl;     //Line 11
return 0;                                        //Line 12
}                                                    //Line 13
void funOne(int& a)                                  //Line 14 
{                                                    //Line 15    
int x = 12;                                      //Line 16    
int z;                                           //Line 17
z = a + x;                                       //Line 18
cout << "Line 19: In funOne: a = " << a << ", x = " << x << ", and z = " << z << endl;               //Line 19
x = x + 5;                                       //Line 20
cout << "Line 21: In funOne: a = " << a << ", x = " << x << ", and z = " << z << endl;               //Line 21
a = a + 8;                                       //Line 22
cout << "Line 23: In funOne: a = " << a << ", x = " << x << ", and z = " << z << endl;               //Line 23
}                                                    //Line 24 
