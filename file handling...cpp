#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream fout;
    string folder ;
    folder ="sample.txt";
    fout.open("folder");
    fout<<"hello";
    fout.close();
    
    ifstream fin;
    fin.open("folder");
    string line;
    while (fin){ // could be if 
    getline(fin,line);
    cout <<line<< endl;
    
    fin.close();}
    return 0;
}