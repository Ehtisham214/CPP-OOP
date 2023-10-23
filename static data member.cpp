#include <iostream>
using namespace std;
class employee
{
	private :
		int id;
		char name[30];
		static int count;
	public :
	void setdata()
	{
	cout<<"enter the name of employee"<<endl;
	cin>>name;	
	cout<<"enter the id of employee"<<endl;
	cin>>id;
	count++;	
	}
	void getdata()
	{
	cout<<"the id of the "<<name <<" is :"<<id<<"and this is the employee number "<<count<<endl;	
	}	
};
int employee :: count;
int main ()
{
	employee a,b,c;
	a.setdata();
	a.getdata();
	
	b.setdata();
	b.getdata();
	
	b.setdata();
	b.getdata();
}
