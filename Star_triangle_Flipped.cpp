#include<iostream>
using namespace std;
main()
{
    int r;
    cout<<"Enter number of Rows: ";
    cin>>r;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i+1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}