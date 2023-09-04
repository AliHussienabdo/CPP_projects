#include <iostream>
#include <string>
using namespace std;

string encrybt(string str){
	for(int i=0;i<str.size();++i){
		if(str[i] == ' ') continue;
		if(str[i] >= 110){
			str[i] -= 13;
		}
		else {
			str[i] += 13;
		}
	}
	return str;
}

string decrypt(string str){
	
	for(int i=0;i<str.size();++i){
		
		if(str[i] == ' ') continue;
		if(str[i] >= 110){
			str[i] -= 13;
		}
		else {
			str[i] += 13;
		}
	}
	return str;
}

string convert_first_lower_to_Upper(string s){
	
	for(auto i = s.begin();i != s.end(); ++i){
		if(i == s.begin() && *i != ' '){
			*i -= 32;
		}
		while(*i == ' ' ){
			++i;
			if(*i != ' '){
				*i = *i - 32;
			}	
		}
	}
	return s;
}
