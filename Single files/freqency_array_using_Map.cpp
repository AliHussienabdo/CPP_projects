#include <iostream>
#include <string>
#include <iterator>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

int main(){
	map<int,int>mp;
	//the map already sorted
	cout<<"enter size element : ";
	int s;
	cin>>s;
	for(int i=0;i<s;i++){
		int n;
		cin>>n;
		mp[n]++;
	}
	for(auto it:mp){
		cout<<it.first<<" => "<<it.second<<endl;
	}
	mp.clear();
	cin.get();
}
