#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	int min=0;
	int max=0;
	bool con=true;
	
	int Xmin=0;
	int Xmax=0;
	
	for(int x=0;x<n;++x){
		cin>>a[x];
		if(con){
			min=a[x];
			max=a[x];
			con=false;
	    }
		if(a[x]<min){
			min=a[x];
			Xmin=x;
		}
		if(a[x]>max){
			max=a[x];
			Xmax=x;
		}
	}
	
	swap(a[Xmin],a[Xmax]);
	
	for(int x=0;x<n;++x){
		cout<<a[x]<<" ";
	}
	
	system("pause");
}
