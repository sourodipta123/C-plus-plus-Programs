//To check a number is a Palindrome 

//A Pralindromic number is a number that remains the same when its digits are reversed

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int original=n;
    int reverse=0;

    while(n>0)
    {
        int lastdigit= n%10;
        reverse=reverse*10 + lastdigit;
        n=n/10;
    }

    if(original==reverse)
    {
        cout<<"The number is a Palindrome number";
    }
    else
    {
        cout<<"The number is not a Palindrome number";
    }
}