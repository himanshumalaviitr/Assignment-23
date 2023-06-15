/*Write a C++ program to swap values of two int variables without using third*/

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value of a:-";
    cin>>a;
    cout<<"enter value of b:-";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a="<<a;
    cout<<endl;
    cout<<"b="<<b;
    return 0;
}
