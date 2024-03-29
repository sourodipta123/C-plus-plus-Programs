#include<iostream>
using namespace std;
 
//Swapping Without 3rd Variable...

main()
{
    int x;
    cout<<"Enter first Number: ";
    cin>>x;

    int y;
    cout<<"Enter second Number: ";
    cin>>y;

    x=x+y;
    y=x-y;
    x=x-y;

    cout<<x<<y;
    return 0;
  
}