#include <iostream>
#include <algorithm>
using namespace std;

bool com(int x,int y){
	return x%2==0 && y%2 != 0;  // arrange the array that even numbers first and the odd last
	//return x>y; // arrange the array such that descinding way 
//	return x<y; // arrange the array such that ascending way
}

int main(){
	int n=5;
	int arr[5]={3,2,9,2,10};
	for(int x=0;x<n;++x){
		cout<<arr[x]<<" ";
	}
	cout<<endl;
	sort(arr,arr+n,com);
	for(int x=0;x<n;++x){
		cout<<arr[x]<<" ";
	}
	cout<<endl;
}
