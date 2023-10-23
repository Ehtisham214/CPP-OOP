#include <iostream>
using namespace std;
class test
{
	private:
	int num;
	public:
		test():num(0)
		{
			cout<<"constructor is called"<<endl;
		}
		friend void show(test obj1);
};
void show( obj1 test)
{
	obj1.num=10;
	cout<<"the value of n is "<<obj1.num<<endl;
  cout<<"i am simple function"<<endl;	
}
main()
{
	test obj1;
	show(obj1);
}
