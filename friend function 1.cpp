#include <iostream>
using namespace std;
class test
{
	private:
	int num;
	public:
		test():num(10)
		{
			cout<<"constructor is called"<<endl;
			cout<<"value of n is "<<num<<endl;
		}
		//friend void show(test obj1);
};
void show()
{
    //num =0;
  cout<<"the value of n is "<<endl;
  cout<<"i am simple function"<<endl;	
}
main()
{
	test obj1;
	show();
}
