.
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
int num;
int sum;
cin >> num;
sum = num;
do
{
     sum = sum + num * (num - 1);
     cin >> num;
}
while (num != -1);
cout << "Sum = " << sum << endl;

//	int num=0;
//	int sum;
//	cin>>sum;
//	while(num!=-1)
//	{
//		cin>>num;
//		sum= sum + 2* static_cast<int>(sqrt(num) );
		
//	}
//	cout <<"sum="<<sum<<endl;
//	return 0;
}
