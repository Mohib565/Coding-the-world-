#include<iostream>
using namespace std;
class car {
public:
string model;
int price;
int speed;
string color ;
car(string m,int p,int s, string c)
{
model= m;
price= p;
speed = s;
color= c;
}




};

int main()
{
car Fortuner= car ("new branded" ,3000000,200,"sky");
    cout << Fortuner.speed << endl;
    return 0;
}