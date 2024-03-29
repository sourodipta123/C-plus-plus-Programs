#include<iostream>
using namespace std;
main()
{
    int x;
    cout<<"Enter the First Number: ";
    cin>>x;

    int y;
    cout<<"Enter the Second Number: ";
    cin>>y;

    int z=x;
    x=y;
    y=z;

    cout<<x<<y;
    return 0;
}