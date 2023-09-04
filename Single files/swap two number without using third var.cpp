#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	int a = 5;
	int b = 10;
	
	a = (a^b);
	b = (a^b);
	a = (a^b);
	
	a = a + b - ( b = a ) ;  // 15 - (5) = 10 ... b = a -> that before ther reintiatize 
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	
	

	cout<<a<<endl<<b;
	
}
