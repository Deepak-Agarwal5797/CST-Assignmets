#include<iostream>
#include<math.h>

using namespace std;

	int  isPrime(int num)
	{
		
		int n=sqrt(num),flag=0;
		for(int i=2;i<=n;i++)
		{
			if(num%i==0)
			{
				flag=1;
				break;
			}
		}
		if (flag==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
		
		
	}

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
	int sum=0,k=0,count=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j =0;j<m;j++)
		{
			if(i==0 && j==0)
			{
				sum  = a[i][j+1]+a[i+1][j];
			}
			else if(i==0 && j==m-1)
			{
				sum = a[i][j-1]+a[i+1][j];
			}
			else if(i==n-1 && j==0)
			{
				sum = a[i-1][j]+a[i][j+1];
			}
			else if(i==n-1 && j==m-1)
			{
				sum = a[i][j-1]+a[i-1][j];
			}
			else if(i==0 && j!=m-1 && j!=0 )
			{
				// no top;
				sum = a[i][j-1]+a[i][j+1]+a[i+1][j];
			}
			else if(j==0 && i!=m-1 && i!=0)
			{
				// no left 
				sum = a[i][j+1]+a[i-1][j]+a[i+1][j];
			}
			else if(i==n-1 && j!=0 && j!=m-1)
			{
				// no bottom
				sum = a[i-1][j]+a[i][j-1]+a[i][j+1];
			}
			else if(j==m-1 && i!=0 && i!=n-1)
			{
				// no right
				sum = a[i][j-1]+a[i-1][j]+a[i+1][j];
			}
			else
			{
				sum = a[i][j-1]+a[i][j+1]+a[i-1][j]+a[i+1][j];
			}
			
			int k = isPrime(sum);
			if(k)
				count++;
		}
	}
	cout<<count;
	
	
}
