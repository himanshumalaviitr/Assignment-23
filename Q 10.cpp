//Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;
int main()
{
    int i,s;
    int a[10];
    cout<<"Enter any 10 no:-";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0,s=0;i<10;i++)
        s+=a[i];
    cout<<"Sum ="<<s;
    return 0;
}
