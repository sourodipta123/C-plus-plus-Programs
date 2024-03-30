#include<iostream>
using namespace std;

int main()
{
    int r,c,s;


    for(r=1;r<=4;r++){
        for(s=1;s<=4-r;s++){
            cout<<" ";
        }
        for(c=1;c<=r*2-1;c++){
            cout<<"*";
        }
        cout<<endl;

    }

    for(r=3;r>=1;r--){
        for(s=1;s<=4-r;s++){
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++){
            cout<<"*";
        }
        cout<<endl;
    }
}