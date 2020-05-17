// maximum height of staircase

#include<iostream>
using namespace std;

int main()
{
	
	int a;
	cin>>a;// no of staircase
	int count,sum=0;
	
	for(int i=1;i<a/2;i++)
	{
		sum = sum+i;
		if(sum==a)
		{
			count =i;
			break;
		}
		else if(sum>a)
		{
			count=i-1;
			break;
		}
		else
		{
			count  = i;
		}
	}
	cout<<count;
	
}
