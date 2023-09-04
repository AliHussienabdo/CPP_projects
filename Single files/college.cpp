#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


vector<string> generate_strings(int n){
	if(n == 1){
		return {"0","1"};
	}
	
	vector<string>v = generate_strings(n-1);
	vector<string>vec;
	
	for(int i=0;i<v.size();++i){
		vec.push_back(v[i] + "0");
		vec.push_back(v[i] + "1");
	}
	return vec;
}

int main(){
	vector<string>v;
	v =  generate_strings(10);
	for(string c:v)
	    cout << c << endl;

	system("PAUSE");
}
