#include<iostream>
using namespace std;

void perimeter()
{
    int l;
    cout<<"Enter the Length: ";
    cin>>l;

    int b;
    cout<<"Enter the Breadth: ";
    cin>>b;

    int p=2*(l+b);

    cout<<"The Perimeter of the Rectangle is: "<<p;
}

void area()
{
    int l;
    cout<<"Enter the Length: ";
    cin>>l;

    int b;
    cout<<"Enter the Breadth: ";
    cin>>b;

    int a=l*b;

    cout<<"The area of the Rectangle is: "<<a;
}

int main()
{
    
    cout<<"Enter 1, to Print the Area of the Rectangle..."<<endl;
    cout<<"Enter 2, to Print the Perimeter of the Rectangle...";

    cout<<endl;

    int a;
    cout<<"Enter the Number: ";
    cin>>a;

    if(a==1){
        cout<<"The Area of the Rectangle..."<<endl;
        area();
    }
    else{
        cout<<"The Perimeter of the Rectangle..."<<endl;
        perimeter();
    }
    return 0;
}