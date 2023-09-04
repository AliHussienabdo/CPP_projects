#include <iostream>
using namespace std;
 
int main(){
	
	int n;
	cin>>n;
	
	if(n>=1&&n<=10000){
		
		for(int x=1;x<=n;x++){
			
			if(x%2==0){
				cout<<x<<endl;
			}
		}
		
	}
}
