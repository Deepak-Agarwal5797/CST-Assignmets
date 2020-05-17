#include<iostream>

using namespace std;

class height
{
	int cm;
	int meter;
	public:
	void input()
	{
		cout<<"enter the height in cm";
		cin>>cm;
		cout<<"enter the heoght in meter";
		cin>>meter;
	}
	
	public:
	height add(height h2)
	{
		height ss;
		ss.cm= this->cm+h2.cm;
		ss.meter=this->meter+h2.meter;
		
		return ss;
	}
	void show()
	{
		cout<<this->cm<<"\n";
		cout<<this->meter;
	
	}
};
int main()
{
	
	height h1,h2,h3;
	h1.input();
	h2.input();
	h3=h1.add(h2);
	h3.show();
	
}


