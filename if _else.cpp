#include<iostream>
using namespace std;

int main()
{
    
    int khoulaage ;
    while (true){
    cout << "enter your age" << endl;
    cin >> khoulaage;
    if ((khoulaage<18) && (khoulaage >=1)){
    cout << "*****pehlay mature tu ho ja imran khan k vote k liye*****" << endl;
    }
    else if (khoulaage>=18){
    cout << "*****han ab tum ho gay mature de do Imran Khan ko vote ****" << endl;
    }
    else if (khoulaage<1 )
    {
    cout << "abbay paida tu ho ja bahi" << endl;
    
    }
    }
    return 0;
}