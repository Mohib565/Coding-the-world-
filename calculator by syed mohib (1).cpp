#include<iostream>
using namespace std;

int add(int x,int y)
{

return x+y;
}

int sub (int x,int y)
{
return x-y;
}
int mul(int x,int y)
{
return x*y;
}
int divide(int x,int y)
{
return x/y;

}

int main()
{

 cout << "WELCOME TO MOHIB CALCULATOR" << endl;
 while(true){
 cout << "enters your values" << endl;
 float n1,n2, answer ;
 cout << "enter your 1st number value" << endl;
 cin >> n1;
 cout << "enter your 2nd number value" << endl;
 cin >> n2;
 
 cout <<"press A for addition,press S for subtraction,press M for multiplication,press D for division"  << endl;
 char input ;
 cin >> input;
 if(input== 'A') answer=add(n1,n2);
 if(input== 'S') answer=sub(n1,n2);
 if(input== 'M') answer=mul(n1,n2);
 if(input== 'D') answer=divide (n1,n2);
 cout << "your answer is:" <<answer<< endl;
 char Q;
 cout << "press any key if you want to continue.  .   . press Q for quit" << endl;
 
 cin >> input;
 
 if (input=='Q') break ;
 }
 return 0 ;
}