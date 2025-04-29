#include<iostream>
using namespace std;

int main()
{
    int marks ;
    cin >> marks;
    if (marks <33 )
    
    cout << "fail" << endl;
    else if (marks <60)
    cout<<"Grade B" <<endl;
    else if (marks <90)
    cout << " Grade A " << endl;
    else if (marks <100)
    cout << " Grade A+" << endl;
    
    return 0;
}