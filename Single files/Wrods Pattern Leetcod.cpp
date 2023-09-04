#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;


bool wordPattern(string pattern, string s) {

    int j=0;
    vector<string>vecOfStrings(0);
    for(int i=0;i<s.size();++i){
        	
        if(s[i] == ' ' ){
        	vecOfStrings.push_back(s.substr(j,i));
        	j=i+1;
		} 
	}
	sort(vecOfStrings.begin(),vecOfStrings.end());
	sort(s.begin(),s.end());
	
	
	return true;

}

int main(){
	cout<<wordPattern("abba","dog cat cat dog");
	cout<<wordPattern("acac","aaa ccc aaa ccc");
	cout<<wordPattern("abcd","aaa bbb ccc ddd");
	//cout<<wordPattern("abc","dog dog dog");
}
