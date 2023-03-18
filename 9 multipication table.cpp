#include <iostream>
using namespace std;
int main(){
	long long int a,b;
	cout<<"multipication table you want to print"<<endl;
	cin>>b;
	
	for ( long long int i=1;i<11;i++)
	{
		cout<<b<<"*"<<i<<"="<<b*i<<endl;
	}
}

