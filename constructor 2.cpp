#include <iostream>
using namespace std;
class test
{
	private:
		int n;
	public :
		test ():n(50)
	{
		cout<<"constructor is called"<<endl;

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
