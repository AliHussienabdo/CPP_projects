#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


//17,18,5,4,6,1
//18,6,6,6,1,-1
vector<int> vec(vector<int>&v){
	
	int theGreatestElement = -1;	
	int current = 0;
	
	for(int i = v.size()-1;i>=0;--i){ 
		current = v[i];
		v[i] = theGreatestElement;   
		if(current > theGreatestElement){
			theGreatestElement = current;
		}	
	}
	return v;
}
int main(){
	vector<int>v{17,18,5,4,6,1};
	vec(v);
	cout<<" 17, 18, 5, 4, 6, 1 : ";
	for(int c:v){
		cout<<c<<" ";
	}
	cout<<endl;
	system("pause");
}
