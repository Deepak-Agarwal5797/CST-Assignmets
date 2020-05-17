#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}

	int g=0,j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			
			j++;
		}
		
	}
					
	if(j%2!=0)
	{
		cout<<"No";
	}
	else
	{
		cout<<"Yes";
	}
}
