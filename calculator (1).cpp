#include<iostream>
using namespace std;

int main()
{
    cout << "WELCOME TO OUR MK CALCULATOR!" << endl;
    cout << "enter the  value" << endl;
    float n1,n2;
    cout << "enter your first value" << endl;
    cin >> n1;
    cout << "enter your second value" << endl;
    cin >> n2;
    float sum,sub,mul,div ;
    sum = n1+n2;
    sub =n1-n2;
    mul =n1*n2;
    div =n1/n2;
    cout << "the sum of two numbers is " <<sum<< endl;
    cout << "the subtraction of two numbers is " <<sub<< endl;
    cout << "the multiply of two numbers is " <<mul<< endl;
    cout << "the division of two numbers is " <<div<< endl;
    cout << "*******thanks for using our cal good by *****" << endl;
    
    return 0;
}