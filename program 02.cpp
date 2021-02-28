#include <iostream>
using namespace std;

int main()
{
	int popA , popB;
	double growthRateA , growthRateB ;
	int year=0;
	cout << "Enter the population town A :";
	cin>>popA;
	cout<<"Enter the Growth Rate of Town A :";
	cin>>growthRateA;
	cout<< "Enter the population town B :";
	cin>>popB;
	cout<<"Enter the Growth Rate of Town b :";
	cin>>growthRateB;
	
	if(popA<popB && growthRateA>growthRateB)
	{
		do
		{
		popA = ((growthRateA / 100) * popA) + popA;
        popB = ((growthRateB / 100) * popB) + popB;
          year++;	
			
		}
		while(popA<popB);
		
		int popDifference=popA-popB;
		int totalPopulation=popA+popB;
		
		cout <<"Town A will surpass town B in population after "<<year<<"years."<<endl;
		cout << "The final population of Town A is :"<<popA<<endl;
		cout <<"The final population of town B is :" << popB << endl;
		cout << "In year "<< year << ", town A has "<< popDifference<<"more poeple the town B."<<endl;
		cout << "The Total population of both town A and Town B is :"<<totalPopulation<<endl;
	//int popDifference = popA - popB;
        //int popTotal = popA + popB;
        //cout << "Town A will surpass Town B in population after " << year << " years.\n" ;
       // cout << "The final population of Town A is: " << popA << ".\n";
       // cout << "The final population of Town B is: " << popB << ".\n";
        //cout << "In year " << year << ", Town A has " << popDifference << " more people than town B.\n";
        //cout << "The total population of both Town A and Town B is " << popTotal << ".\n";
	}
	
	else
	{
		cout << "Invalid data input."<<endl;
	}
	return 0;
	
}
