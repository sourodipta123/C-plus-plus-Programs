#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;

    if (n>99 && n<999){
        cout<<"The Number is a 3-digit Number...";
    }
   
    else{
        cout<<"The Number is not a 3-digit Number...";
    }

    cout<<endl;
    cout<<"The Code is Successfull...";
}
