#include <iostream>
using namespace std;
class animal
{
	protected :
		int legs;	
};
class dog : public animal
{
	protected: 
	    int tail;
		public :
		void getdata()
	{
	cout<<"enter legs";
	cin>>legs;
	cout<<"the legs are "<<endl;
	cout<<"enter tails";
	cin>>tail;
	cout<<"the tail is "<<endl;
    cout<<"the sum is"<<legs+tail<<endl;		
	}				
};
int main ()
{
	dog a;
	a.getdata();
}
