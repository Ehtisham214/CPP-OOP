#include <iostream>
using namespace std;
class parent
{
	private :
		
    protected :
		int a;
	    int b;
	public :
	    int c;			 	
};
class child : private parent
{
	public :
		void input()
	{	
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	cout<<"enter the value of c"<<endl;
	cin>>c;
    }
    
};
int main ()
{
	child obj;
	obj.input();
	/*cout<<"enter the value of c"<<endl;
	cin>>obj.c;*/
}
