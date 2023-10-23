#include<iostream>
using namespace std;
class beta;
class alpha
{
	private:
		int data;
	public:
	alpha() :data(3)
    {  
    }
    friend void add(alpha,beta);
};
class beta
{
	private:
		int data;
	public:
	beta() :data(7)
    {  
    }
    friend void add(alpha,beta);
};
void add(alpha a,beta b)
{
	cout<<a.data+b.data;
}
int main ()
{
alpha a;
beta b;
add(a,b);
return 0;
}
