#include<iostream>

using namespace std;

class Media
{
	
	public :
		char title[30];
		char publication[30];
		
	virtual void read()=0;
	virtual void show()=0;
};

class Book :public Media
{
	public:
	int pages;	
	void read()
	{
		cout<<"Enter title\n";
        cin>>title;
        cout<<"Enter publication\n";
        cin>>publication;
        cout<<"Enter no. of pages\n";
        cin>>pages;
	}
	void show()
	{
		cout<<"Title  "<<title<<endl;
		cout<<"Publication  "<<publication<<endl;
		cout<<"Pages  "<<pages<<endl;
	}
};
//class 

class Tape :public Media
{
	public:
		float rec;
		
	void read()
	{
		cout<<"Enter title\n";
        cin>>title;
        cout<<"Enter publication\n";
        cin>>publication;
        cout<<"Enter the total time of rec\n";
        cin>>rec;
	}
	void show()
	{
		cout<<"Title  "<<title<<endl;
		cout<<"Publication  "<<publication<<endl;
		cout<<"Rec  "<<rec<<endl;
	}
};




int main()
{
	Media *a1 ,*a2;
	Book a11;
	Tape a22;
	a1=&a11;
	a2=&a22;
	a1->read();
	a2->read();
	a1->show();
	cout<<"\n";
	a2->show();
	
	
}

