#include <iostream>
using namespace std;
class student
{
	private :
		int id;
		char name[52];
		
	public :
	    void setdata()
	{
		for(int i=0;i<=3;i++)
		{		
		cout<<"enter the name of the student :"<<endl;
		cin>>name;
		cout<<"enter the id of the student :"<<endl;
		cin>>id;
	    }
	}
	    void getdata()
	{
		for(int i=0;i<=3;i++)
	    {
		   cout<<"the name of the student is :"<<name<<"and the id is :"<<id<<endl;
	    }  
    }
		
};
int main ()
{
	student a;
	a.setdata();
	a.getdata();
}





