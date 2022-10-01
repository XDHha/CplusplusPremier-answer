#include<iostream>

using namespace::std;

int main()
{
	int val=0,num1=0,num2=0;

	cout<<"Enter two number"<<endl;
	cin>>num1>>num2;
	val=num1+1;
	while(num1<val&&val<num2){
		cout<<val<<endl;
		val++;
		
	}

	return 0;

}
