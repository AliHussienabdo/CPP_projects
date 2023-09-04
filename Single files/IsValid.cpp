#include <iostream>
using namespace std;

bool isValid(string s) {
    for(int x=0;x<s.size();x+=2){
        if(s[x] == s[x+1]){
            return true;
        }
        
    }
    return false;
}


int main(){
	string s="{}";
	cout<<s.size();
	cout<<isValid(s);
}
