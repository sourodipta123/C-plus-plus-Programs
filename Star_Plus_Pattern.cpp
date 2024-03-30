#include<iostream>
using namespace std;

int main()
{
    int r;
    cout<<"Enter number of Rows: ";
    cin>>r;
   
    for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            if(i==3 || j==3){
                cout<<"* ";
            }

            
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }
}