//Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any two no:-";
    cin>>a>>b;
    if(a>b)
        cout<<"maximum="<<a;
    else
        cout<<"maximum="<<b;
    return 0;
}
