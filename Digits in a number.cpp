#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    cout<<count;
}

