#include<iostream>

using namespace std;

class date
{
	public:
	int month,year,day;
	
	date()
	{
		cout<<"enter the day";
		cin>>day;
		while(day<0 || day>31)
		{
			cin>>day;
		}
		cout<<"enter the month"<<endl;
		cin>>month;
		while(month<0 || month>12)
		{
			cin>>month;
		}
		
		cout<<"enter the year";
		cin>>year;
		if(((year % 4 == 0) && (year % 100 != 0)) || 
             (year % 400 == 0) )
			year++;
		
		
	}
	
	void operator ++ (int)
	{
		day++;
		if(day>31)
		{
			month++;	
		}	
		if(month>12)
		{
			year++;
		}
		cout<<"incremented date"<<"\n";
		cout<<this->day<<"\n";
		cout<<this->month<<"\n";
		cout<<this->year<<"\n";
	}
};

int main()
{
	
	date d1;
	d1++;
	
	
}
