#include <iostream>
using namespace std;
class counter 
{
	protected :
		/*unsigned*/ int count;
	public :
	    counter() : count(0)    //count=0
		{
		}	
		counter(int c ) :count(c)     //count=0
		{
		}	
    void  getcount()
    {
    	cout<<count<<endl;
	}
    counter operator ++()
    {
    	return counter(++count);
	}
};
class countdn : public counter
{
	public :
		countdn(): counter()
		{
		
		}
		countdn(int d): counter(d)
		{
			cin>>d;
		}
	counter operator --()
	{
		return counter (--count); 
	}
};
int main()
{
	countdn c1;
	countdn c2;
	c1.getcount();
	--c1;
	--c1;
	c1.getcount();
	++c2;
	++c2;
	c2.getcount();
	--c2;
	--c2;
	c2.getcount();
}
