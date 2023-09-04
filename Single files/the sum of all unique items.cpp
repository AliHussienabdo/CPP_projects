#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int a[5] = {1,2,3,4,5};
	sort(a,a+5);
	int num = a[0];
	for(int i=1;i<5;++i){
		num = a[i];
		
	}
	cout<<num<<endl;
}
