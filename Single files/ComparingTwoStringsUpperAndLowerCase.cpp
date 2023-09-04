#include <iostream>
using namespace std;

// A 65 , Z 90
// a 97, z 122

void changUperToLower(string &str){
	
	//int sizeOfString=(sizeof(a)/sizeof(char));  to determine the size of string using array method size
	for(int x=0;x<str.size();++x){
		if(str[x]<97){
			str[x]= char(str[x]+32);
		}
	}
}

int main(){
	
	string a , b ;
	cin>>a>>b;
	changUperToLower(a);
	changUperToLower(b);
	if(a==b)
		cout<<"0";
	
	else if(a>b)
		cout<<"1";
	
	else
		cout<<"-1";
	
	
}
