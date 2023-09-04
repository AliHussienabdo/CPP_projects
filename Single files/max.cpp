#include <iostream>
#include <cmath>
using namespace std;


int main(){
	int a,b,c,d; 
	cin >> a >> b >> c >> d; //2 10 7
	
	cout << max(a,max(b,max(c,d)));
}
