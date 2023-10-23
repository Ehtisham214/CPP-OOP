#include<iostream>
using namespace std;
class base_1
{ 
	protected:
		int a=2;
};
class base_2
{
	protected:
			int b=4;
};
class add : public base_1 , base_2
{
	protected: 
			int r;
	public:
		void addition()
		{
			r=a+b;
			cout<<"the result of a+b is: "<<r<<endl;
		}
};
int main()
{
	add a1;
	a1.addition();
}
