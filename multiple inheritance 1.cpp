#include <iostream>
using namespace std;
class alpha
{
	protected :
		int a;
	public :
	    void show()
		{
			cout<<"enter value of a"<<endl;
			cin>>a;
			}	
};
class beta
{
	protected :
		int b;
	public :
	    void get()
		{
			cout<<"enter value of b"<<endl;
			cin>>b;
			}	
};
class gamma :public alpha,public beta
{
	protected :
		int c;
	public :
	  void set()
		{
	    cout<<"the addition a and b is "<<a+b<<endl;
		}
};
int main ()
{
	gamma g;
	g.show();
	g.get();
	g.set();
}







