#include <iostream>
#include <vector>
#include <cmath>
#include <bitset>
using namespace std;

int main(){
	vector<string>v;
	
	cout << "Enter number of value" << endl;
	int num; cin>> num;
    string str(num,'0');
    
	for(int i=0;i<pow(2,num);++i){
		
		for(int j=str.size()-1;j>=0;--j){
			if(str[j] == '0'){
				str[j] = '1'; //001  010 011 0 
				break;
			}
			else {
				str[j] = '0';
			}
		}
		v.push_back(str);
	}
	
	for(string val:v){
		cout << val << endl;
	}
	
}
