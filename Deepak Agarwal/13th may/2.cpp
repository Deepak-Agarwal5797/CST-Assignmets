#include<iostream>
#include<math.h>
using namespace std;

void area(float height,float base)
{
	cout<<"Area is"<<(float((0.5)*base*height));
}
void area(int a,int b,int c)
{
	float s=(a+b+c)/2;
	float h = (float)((s)*(s-a)*(s-b)*(s-c));
	cout<<"Area is"<<sqrt(h);
}
int main()
{
	int a=2,b=3,c=3;
	float h=12,ba=20.9;
	area(a,b,c);
	cout<<"\n";
	area(h,ba);
}
