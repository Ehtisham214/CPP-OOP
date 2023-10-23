#include <iostream>
using namespace std;
class parent 
{
	public :
		parent()
		{
			cout<<"i am parent constructor"<<endl;
		}	
		~parent()
		{
			cout<<"i am parent destructor"<<endl;
		}
};
class child : public parent
{
	public :
	child()
	{
	      cout<<"i am child  constructor"<<endl;	
	}
	~child()
		{
			cout<<"i am child  destructor"<<endl;
		}
};
class child1 : public parent
{
	public :
	child1()
	{
	      cout<<"i am child1  constructor"<<endl;	
	}
	~child1()
		{
			cout<<"i am child1  destructor"<<endl;
		}
};
int main ()
{
	child obj;
	child1 obj1;
}
