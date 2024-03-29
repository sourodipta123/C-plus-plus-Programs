#include<iostream>
using namespace std;

void finish(){
    cout<<endl;
    cout<<"The Code is Successfull...";
}



main()
{
    int a;
    cout<<"Enter the first number: ";
    cin>>a;

    int b;
    cout<<"Enter the second number: ";
    cin>>b;

    char c;
    cout<<"Enter Arithmetic Operator: ";
    cin>>c;

    switch(c){
        case '+':{
            cout<<"The Sum is: "<<a+b;
            break;
        }
        case '-':{
            cout<<"The Difference is: "<<a-b;
            break;
        }
        case '*':{
            cout<<"The Product is: "<<a*b;
            break;
        }
        case '/':{
            cout<<"The Division is: "<<a/b;
            break;
        }
        default:{
            cout<<"Invalid Operator...";
            break;
        }
    }

    finish();
    
}