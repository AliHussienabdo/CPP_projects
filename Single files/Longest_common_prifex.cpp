#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if(strs.size() == 1){
        return strs[0];
    }
    string com = "";
	char val ;
	for(int i=0;i<strs[0].size();++i){
		
		for(int j=0;j<strs.size()-1;++j){
			
			if(strs[j][i] == strs[j+1][i]){
				val =strs[j][i];
				continue;
			}
			return com;
		}
		com+=val;
	}
	return com;
}

int main(){
	vector<string>str{"flower","flow","flight"};
	cout<<longestCommonPrefix(str)<<endl;
	vector<string>str1 {"dog","racecar","car"};
	cout<<longestCommonPrefix(str1)<<endl;
	vector<string>str2 {"dog","dogww","dogpp"};
	cout<<longestCommonPrefix(str2)<<endl;
}
