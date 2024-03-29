#include<iostream>
using namespace std;
main(){
    int cp;
    cout<<"Enter the Cost Price: ";
    cin>>cp;

    int sp;
    cout<<"Enter the Selling Price: ";
    cin>>sp;

    if(cp<sp){
        cout<<"It's a Profit...";
        cout<<endl;
        int p;
        cout<<"The Profit is: "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"It's a Loss...";
        cout<<endl;
        int l;
        cout<<"The Loss is: "<<cp-sp;
    }
    else{
        cout<<"No Profit, no Loss...";
    }
    cout<<endl<<endl<<"The Code is Successfull...";
}