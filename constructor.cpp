#include <iostream>
using namespace std;
class test
{
	private:
		int n;
	public :
		test ()
	{
		cout<<"constructor is called"<<endl;
		cin>>n;
	}	
	void display()
	{
		cout<<"the value of n is :"<<n<<endl;
	}
};
main ()
{
	test t ;
	t.display();
}
