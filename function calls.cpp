#include<iostream>
using namespace std;
int sum(){
int a;
int b;
int sum ;
cout << "enter your first value " << endl;
cin >> a;
cout <<"enter your second value"<<endl;
cin >> b;
sum= a+b;
cout << "the sum of two numbers are" << endl;
return sum;
}
int main (){
int answer;


while (true){
answer=sum();
cout << answer << endl;

}


}
    
    