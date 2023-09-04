
#include <iostream>
using namespace std;

// Euclid’s algorithm 
// my implementation to find the greatest common divisor of two integers 
// i do that using recursion technique 

int GCD(int a,int b){

	if(a==0 || b==0){
		if(a>0){
			return a;
		}
		return b;
	}
	return GCD( b , a % b);
}

int main(){
	string a,b;
	cout<<"Enter two numbers to find the Greatest Common Divisor \n";
	cin>>a>>b;
	for(int i = 0;i<a.size();++i){
		
	}
	cout<<" GCD ( "<< a <<" , "<< b <<" ) = "<< GCD(a,b) << endl;
	system("pause");
}
