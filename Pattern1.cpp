#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter the number of Rows: ";
    cin>>r;

    int c;
    cout<<"Enter the number of Columns: ";
    cin>>c;

    for(int i=1;i<=r;i++){
        for(int i=1;i<=c;i++){
            cout<<" * ";
        }
         cout<<endl;
    }
   
}