#include <iostream>
using namespace std;
class employee
{
	private :
		int id;
		char name[30];
	public :
	void setdata()
	{
	cout<<"enter the name of employee"<<endl;
	cin>>name;	
	cout<<"enter the id of employee"<<endl;
	cin>>id;
		
	}
	void getdata()
	{
	cout<<"the id of the "<<name <<" is :"<<id<<endl;	
	}	
};
int main ()
{
	employee a,b,c;
	a.setdata();
	a.getdata();
	
	
}



