#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the Point of X: ";
    cin>>x;

    int y;
    cout<<"Enter the Point of Y: ";
    cin>>y;

    if(x>0 && y>0){
        cout<<"The Point is in 1st Quadrant...";
    }

    else if(x<0 && y<0){
        cout<<"The Point is in 3rd Quadrant...";
    }

    else if(x<0 && y>0){
        cout<<"The Point is in 2nd Quadrant...";
    }

    else if(x>0 && y<0){
        cout<<"The point is in 4th Quadrant...";
    }
    else{
        cout<<"The Point is in the Origin...";
    }
    cout<<endl;
    cout<<"The Code is Successfull...";


}