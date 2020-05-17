#include<iostream>

using namespace std;
class Girls;


class Boys
{
	private:
		int income;	
		
	public:
	Boys()
	{
		this->income = 40000;
	}
	friend class Girls;
	
	void Addition(Girls g1);

	
};

class Girls
{
	private:
		int income;	
		
		public:
		Girls()
		{
			this->income= 30000;
		}
		int get()
		{
			return this->income;
		}
	friend class Boy;
	
	Boys swap(Boys b1)
	{
		cout<<"Before Swapping\n"<<this->income<<"  "<<b1.income<<endl;
		int t = b1.income;
		b1.income=this->income;
		this->income=t;
		cout<<"Afer Swapping\n"<<this->income<<"  "<<b1.income<<endl;
		return b1;
	}
};

void Boys::Addition(Girls g1)
{
		//int t=this->income+g1.get();	
		cout<<"Addition    "<<this->income+g1.get()<<endl;
}

// Driver code
int main()
{
	Girls g1 ;
	Boys b1;
	b1=g1.swap(b1);
	
	b1.Addition(g1);
}

