#include<iostream>
using namespace std;

int main()
{
    int n;                          //The Variable is -> n
    cout<<"Enter a number: ";
    cin>>n;                             //Input of a number


    int reverse=0;              

    while(n>0)
    {
        int lastdigit= n%10;                        //(n%10) will give the last digit means the remainder of the divident
        reverse= reverse*10 + lastdigit;            
        n=n/10;                                     //it will give the integer value
    }
    cout<<"The Reversed number is: "<<reverse;
}