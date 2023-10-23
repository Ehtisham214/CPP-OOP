#include <iostream>
using namespace std;
class student 
{
	private :
		int rollno,age;
		char name[30];
	public  :
	     void inputdata()
	{
		cout<<"enter your name"<<endl;
		cin>>name;
		cout<<"enter your rollno"<<endl;
		cin>>rollno;
		cout<<"enter your age"<<endl;
		cin>>age;		
	}
	void outputdata()
    {
        cout<<"your name is :"<<name<<endl;
        cout<<"your rollono is :"<<rollno<<endl;
        cout<<"your age is :"<<age<<endl;
	}
};
main ()
{
	student s;
	cout<<"-------input data-------"<<endl;
	s.inputdata();
	cout<<"-------output data-------"<<endl;
	s.outputdata();
}
