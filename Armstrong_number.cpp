//To Check a Armstrong number

//The number which is equal the sum of its digits each raised to a power

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum=0;
    int original=n;

    while(n>0)
    {
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum == original){
        cout<<"The number is a Armstrong Number";
    }
    else{
        cout<<"The number is not a Armstrong Number";
    }
}