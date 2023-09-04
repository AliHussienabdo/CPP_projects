#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int division(int a,int b){
	if(b==0){
		throw exception{};
	}
	return static_cast<double>(a)/b;
}

int main(){
	int a,b; 
	
	while(cin>>a>>b){
		try{
			cout<<division(a,b);
		}
		catch(exception& e){
			cout<<e.what()<<endl;
		}
	}
	
}
