#include<iostream>
using namespace std;
int mystery(int num1, int num2)
{
   if (num1 > 0)
   {
     for (int i = 1; i <= num1; i++)
           num2 = num2 * i;
     return num2;
   }
   else if (num2 > 0)
   {
     for (int i = 0; i <= num2; i++)
           num1 = num1 + i;
     return num1;
   }
}
int main()
{
cout << mystery(-2, -4) << endl;
//	cout << mystery(2, 3) << endl;
return 0;
	
}

//int num = 0, count;
//int y = 0;
//for (count = 1; count <= 5; count++)
  //  {
    // y = y + count;
     //num = num * count + y;
    //}
//cout << "num = " << num << ", y = " << y << endl;   
