#include<iostream>
using namespace std;

int main()
{
    string name;
    cout<<"Enter a Alphabet or Word: ";
    cin>>name;

    if(name>="a" && name<="z")
    {
        cout<<"The Alphabet or Word is in Lowercase";
    }
    else{
        cout<<"The Alphabet or Word is in Uppercase";
    }
}