#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
int romanToInteger(string s){
	map<char,int>mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
	int sum = 0;
	for(int i=0;i<s.size();++i){
		if(mp[s[i]] >= mp[s[i+1]]){
			sum += mp[s[i]];
		}
		else {
			sum += mp[s[i+1]] - mp[s[i]];
			++i;
		}
	}
	return sum;
	
}

void pause(){
	cout << "\npress Enter to go to the second expression ";
	cin.get();
	cout<<endl;
}
int main(){  
	cout << "III : "<< romanToInteger("III") << endl;
	pause();
	cout << "LVIII : " << romanToInteger("LVIII") << endl;
	pause();
	cout << "MCMXCIV : " << romanToInteger("MCMXCIV") << endl;
	
	//pause();
    
	
}
