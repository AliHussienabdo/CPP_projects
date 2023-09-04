#include <iostream>
#include <vector> // vector class-template definition
#include <iterator> // ostream_iterator iterator
#include "palidrome_vec.h"
using namespace std;

int main(){
	int size;
	cin>>size;
	vector<int>vec(size);
	for(int i=0;i<size;++i){
		cin>>vec[i];
	}
	(IsPalidrome(vec))?cout<<"true":cout<<"false";
	
}
