#include<iostream>

using namespace std;

class A
{
	public:
	static int a;
	
	A()
	{
		cout<<"Obj created"<<a<<endl;
		a++;
	}
	
	~A()
	{
		a--;
		cout<<"Obj destroyed  "<<a<<endl;		
	}
	
};
int A:: a = 0;
int main()
{
	A a;
	A b;
	
	cout<<"live objects"<<A::a<<"\n";
	A c;
	cout<<"live objects"<<A::a<<"\n";

}

