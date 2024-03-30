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
    int a=l*b;

    //Giving the Area of the Rectangle
    cout<<"The Area of the Rectangle is: "<<a;

    return 0;

}