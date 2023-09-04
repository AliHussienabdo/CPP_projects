#include <iostream>
#include <string>
#include <stack>
#define F "YES";


using namespace std;

bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();++i){
        	char c = s[i];
        	if(c == '(' || c == '{' || c == '['){
        		st.push(c);
			}
			else{
				if(c == ')' && ( st.empty() || st.top() != '('  )){
					return false;
				}
				else if (c == ']' && ( st.empty() || st.top() != '[')){
					return false;
				}
				else if(c == '}' && (st.empty() || st.top() != '{' )){
					return false;
				}
				st.pop();
			}
		}
        if(!st.empty()){
            return false;
        }
		return true;
}

int main(){
	cout << F;
}
