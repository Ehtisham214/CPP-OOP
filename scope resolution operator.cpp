#include <iostream>
using namespace std;
class A
{
	private :
		int num;
	public :
	    void getvalue();
};

void A::getvalue()
{
	cout<<"hello world"<<endl;
}
main ()
{
	A a;
	a.getvalue(); 
}
