#include <iostream>
#include <iterator>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
	deque<double>d = {1,2,3,4,5,6,7};
	d.push_back(8);
	d.push_front(0);
	ostream_iterator<int>output{cout," "};
	cout<<"print elemnts of deque using iterator\n";
	copy(d.cbegin(),d.cend(),output);
	cout<<"\nprint deque elements using subscribt\n";
	for(int i=0;i<d.size();++i){
		cout<<d[i]<<" ";
	}
	cout<<"\nprint deque using auto iterator \n";
	auto it = d.cbegin();
	for(;it!=d.cend();++it){
		cout<<*it<<" ";
	}
	it = d.begin();
	d.insert(it,10);
	cout<<"\nprint elemnts after insert using for auto iterator \n";
	for(auto dd:d){
		cout<<dd<<" ";
	}
	d.clear();
	
}
