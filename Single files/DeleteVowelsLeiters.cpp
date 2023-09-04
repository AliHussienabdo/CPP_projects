//Vowels are letters "A", "O", "Y", "E", "U", "I"
#include <iostream>
using namespace std;

char changUperToLower(char str){
	
	if(str<97){
		str=char(str+32);
		return str;
	}
	return str;
}

void DeleteVowelsLeiters(string &str){
	
	for(int x=0;x<str.size();++x){
		char ch=str[x];
		
		if(ch!='a'&&ch!='o'&&ch!='y'&&ch!='e'&&ch!='u'&&ch!='i'&&ch!='I'
		   &&ch!='A'&&ch!='O'&&ch!='Y'&&ch!='U'&&ch!='E'){
		   	
			cout<<"."<<changUperToLower(str[x]);
		}
	}
}


int main(){
	string str;
	cin>>str;
	DeleteVowelsLeiters(str);
}
