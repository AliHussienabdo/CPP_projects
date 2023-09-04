#include <iostream>
#include <string>
#include <bitset>
#include <array>
#include <algorithm>
using namespace std;

int main(){
	int n;cin>>n;int a[n];
	while(n--){
		cin>>a[n];
	}
	n = sizeof(a)/sizeof(a[0]);
	while(n--){
		cout<<a[n]<<endl;
	}
	cout<<a[0];
}
