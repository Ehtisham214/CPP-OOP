#include <iostream>
using namespace std;
class alpha 
{
	private :
		int a;
	public :
	    alpha()
		{
			a=0;
		}	
friend istream &operator>>(istream in,alpha o); 
};

istream &operator>>(istream in,alpha o)
{
	cout<<"enter id"<<endl;
	cin>>o.a;
	}
int main()
{
	alpha obj;
	cin>>obj;
}
