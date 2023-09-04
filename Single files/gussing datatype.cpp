#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	double num1, num2, num3;
	cin>>num1>>num2>>num3;
	double  res = ((num1*num2)/num3);  // the result as double  
	long long myRes = res;     // the result as intger  3.2 will be 3
	double Fraction = res - myRes ;  
	
	if(Fraction>0){
		cout<<"double";
		return 0;
	}
	
	if(res>=1&&res<=2147483647){
		cout<<"int";
	}
	else {
		cout<<"long long";
	}

}
