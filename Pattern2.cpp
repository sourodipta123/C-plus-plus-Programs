#include<iostream>
using namespace std;
main()
{
    int r;
    cout<<"Enter the Number of Rows: ";
    cin>>r;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}