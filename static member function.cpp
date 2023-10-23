#include <iostream>
using namespace std;
class teacher
{
    private :
    	int id;
    	static int count;
    	char name[50];
    public :
	void getdata(void)
	{
	    cout<<"enter the name of the teaher"<<endl;
		cin>>name;
		cout<<"enter the id"<<endl;
		cin>>id;
		count ++;		
	}
	void setdata(void)
	{
		cout<<"THE NAME OF THE TEACHER IS : "<<name<<"AND THE ID OF THE TEACHER IS : "<< id<<endl;
	}
	static void getcount(void)
	{
		cout<<"this is the counter number "<<count<<endl;
	}
};
int teacher::count;
int main()
{
	teacher a,b,c;
	a.getdata();
	a.setdata();
	teacher::getcount();
	
	b.getdata();
	b.setdata();
	teacher::getcount();
	
	c.getdata();
	c.setdata();
	teacher::getcount();
	}	
	
	
	
	
	
