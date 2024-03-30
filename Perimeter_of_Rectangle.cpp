#include<iostream>
using namespace std;

int main()
{
    int l;                          //Giving the variable name 'l' for length
    cout<<"Enter the Length: ";
    cin>>l;                         //Taking input of the length

    int b;                                      //Giving the variable name 'b' for breadth
    cout<<"Enter the Breadth: ";
    cin>>b;                                                 //Taking input of the breadth

    //Perimeter Formula 
    int p=2*(l+b);

    //Giving the Perimeter of the Rectangle
    cout<<"The Perimeter of the Rectangle is: "<<p;

    return 0;

}