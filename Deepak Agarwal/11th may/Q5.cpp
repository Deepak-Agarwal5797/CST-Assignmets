// square root 

#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=1,j=0;
	while(i>0)
	{
		j++;
		n = n-i;
		if(n<i)
		{
			
			break;
		}
		else
		{
			i=i+2;
		}
	}
	cout<<j;
	
	
	return 0;
}
