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
class child1 : public parent
{
	public :
	child1()
	{
	      cout<<"i am child 1 constructor"<<endl;	
	}
	~child1()
		{
			cout<<"i am child 1 destructor"<<endl;
		}
};
class child2 : public child1
{
	public :
	child2()
	{
	      cout<<"i am child 2 constructor"<<endl;	
	}
	~child2()
		{
			cout<<"i am child 2 destructor"<<endl;
		}
};
int main ()
{
	child2 obj;
}
