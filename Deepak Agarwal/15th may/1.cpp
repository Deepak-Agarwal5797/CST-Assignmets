#include<iostream>
#include<vector>

using namespace std;

int main()
{
	
	vector<int> t2(6);
	vector<int> t1(6);
	int count=0,count1=0,cont1=0,w1=0,cont=0,w=0;
	cout<<"Team-1 over\n";
	for(int i=0;i<t2.size();i++)
	{
		if(w==2)
		{
			break;
		}
		cin>>t2[i];
		
		if(t2[i]<0){
			if(t2[i]==-1)
			i= cont-1 ;
			
			else 
			{
				cont++;
				w++;
			}
		}
		else if(t2[i]>=0)
		{
			count1=count1+t2[i];
			cont++;
		}
		
		
		
	}

	cout<<"Team-2 over"<<"\n";
	
	
	
	for(int i=0;i<t1.size();i++)
	{
		if(w1==2)
		{
			break;
		}
		cin>>t1[i];
		
		
		if(t1[i]<0){
			if(t1[i]==-1)
			i= cont1-1;
			
			else 
			{
				cont1++;
				w1++;
			}
		}
		else if(t1[i]>=0)
		{
			count=count+t1[i];
			cont1++;
		}
		
		
		
	}

 	if(count1!=0)
	{
		count1++;
	}
//	cout<<"\n"<< " count   "<<count<< " count1 "<< count1;
	
	if(count1>count)
		cout<<"Team 2 won";
	
	else if(count1<count)
		cout<<"Team 1 won";	
	
	else 
		cout<<"Thriller! finally, It's a tie";

	return 0;
	
}
