#include <iostream>
using namespace std;
class ab
{
private :
	int n;
public :
    ab () : n(0)
{
	}
    void operator ++()
    {
    	++n;
	}
	void operator --(int)
    {
    	n--;
	}
	void set()
	{
	    cout<<"the value of n is "<<n<<endl;
	}
};
int main ()
{
	ab obj1,obj2;
	++obj1;
	obj1.set();
	++obj1;
	obj1.set();
	obj2--;
	obj2.set();
}
