#include<iostream>

using namespace std;
int main()
{


	int n,m;
	cin>>n>>m;
	
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int arr[m]={0};
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==1)
			{
				arr[j]=arr[j]+1;
			}
		}
	}
	int k=0;
	for(int i=0;i<m;i++)
	{
		if(arr[i]%2!=0)
		{
			k++;
		}
	}
	
	cout<<k;
	
	
	
	return 0;
}
