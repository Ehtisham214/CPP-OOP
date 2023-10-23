#include <iostream>
using namespace std;
class B;
class A
{
	private :
		int num1;
	public :
	    void getvalueA();
	    friend void add(A,B);
};
void A::getvalueA()
{
	cout<<"enter first number"<<endl;
	cin>>num1;
}
class B
{
	private :
		int num2;
	public :
	    void getvalueB();
	    friend void add(A,B);
};
void B::getvalueB()
{
	cout<<"enter second number"<<endl;
	cin>>num2;
}
void add(A obj1 ,B obj2)
{
	cout<<"the result of addition of two numbers is"<<obj1.num1 +obj2.num2<<endl;
}
int main ()
{
	A obj1;
	B obj2;
	obj1.getvalueA();
	obj2.getvalueB();
	add(obj1,obj2);
	
}
