#include<iostream>
using namespace std;
main()
{
    int a;
    cout<<"Enter the First Number: ";
    cin>>a;

    int b;
    cout<<"Enter the Second Number: ";
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
            cout<<"The product is: "<<a*b;
            break;
        }

        case '/':{
            cout<<"The Division is: "<<a/b;
            break;
        }

        default:{
            cout<<"The operator is Invalid...";
            break;
        }
    }

    cout<<endl;
    cout<<"The Code is Successfull...";

}