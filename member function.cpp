#include <iostream>
using namespace std;
class test
{
   private :
   int rollno;
   public:
   void output(int arollno)
{
	rollno=arollno;
	cout<<"enter your roll no."<<endl;
	cin>>arollno;
	cout<<"your roll no.is"<<rollno;
}
};
main ()
{
test s;
s.output(50);
};
