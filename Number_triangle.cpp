#include<iostream>
using namespace std;
main()
{
    int r;
    cout<<"Enter the number of Rows: ";
    cin>>r;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}