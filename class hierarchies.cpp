#include <iostream>
using namespace std;
class alpha
{
	protected :
		int a=5;
		int b=4;
		int c=3;
			
};
class beta : public alpha 
{
	protected :
		int d;	
	public :
	    void setdata()
		{
			d=a+b;
			cout<<d<<endl;
			}	
};
class gamma : public alpha
{
	protected :
		int e;	
	public :
	void getdata()
	{
		e=a+c;
		cout<<e;
		}	
};
int main ()
{
beta obj1;
gamma obj2;
obj1.setdata();
obj2.getdata();
}
