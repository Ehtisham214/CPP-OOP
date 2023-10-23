#include <iostream>
using namespace std;

class employee
{
	private :
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getcount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};
int employee::count;
int main()
{
	employee a,b,c;
	a.setdata();
	a.getdata();
	a.getcount();
	
	b.setdata();
	b.getdata();
	b.getcount();
	
	c.setdata();
	c.getdata();
	c.getcount();
}







