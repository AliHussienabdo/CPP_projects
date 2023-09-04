#include <iostream>
#include "array.h"
using namespace std;

// I FUCKING DID IT .... I'M VERY HAPPY RIGHT NOW 


int main() {
	Array n(3,3);
	Array p(3,3);
	
	cout<<"put the values of the first 2D array\n";
	cin>>n;
	cout<<"the array's values \n"<<n;
	
	cout<<"put the values of the socend 2D array\n";
	cin>>p;
	cout<<"the array's values \n"<<p;
	
	(n!=p)?cout<<"NOT equial each other \n" : cout<<"equal each other\n";
	
	system("pause");
	return 0;
}
