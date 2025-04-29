#include<iostream>
using namespace std;
struct student {
   string  name ;
    int roll_no;
};
int main()
{
student s1; // here student is a data type 
s1.name= "ali";
s1.roll_no = 784;
student *s;
s = &s1;
// NEW INSTANCE WITHOUT DECLARING THE VARIABLE 
 s= new student ;
 s->name = "mohib";
 //int i;
  //for( int i=0 ;i<10;i++)
  delete s;

    cout << s << endl;//= s->name
    
    return 0;
}