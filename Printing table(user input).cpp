#include<iostream>
using namespace std;

main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	for(int i=n;i<=(n*10);i+=n){									//Printing the table of the number input by the user...
		cout<<i<<endl;
		
	}
}
