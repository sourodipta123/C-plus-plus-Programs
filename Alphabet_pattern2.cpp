#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter number of Rows: ";
    cin>>r;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            cout<<(char)(i+64)<<" ";
        }
        cout<<endl;
    }
}
