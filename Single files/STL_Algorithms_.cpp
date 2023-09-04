#include <iostream>
#include <cmath>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <forward_list>
using namespace std;

int main(){
	array<int,10>vec;
	array<int,10>vec1;
	array<int,20>vec2;
	int num =1;
	int val = num;
	
	generate(vec.begin(),vec.end(),[&val](){  return val++;});
	val = num;
	generate(vec1.begin(),vec1.end(),[&val](){ return val++;});
	ostream_iterator<int>output{cout," "};
	copy(vec.cbegin(),vec.cend(),output);
	cout<<endl;
	copy(vec1.cbegin(),vec1.cend(),output);
	cout<<endl;
	
	merge(vec.cbegin(),vec.cend(),vec1.cbegin(),vec1.cend(),vec2.begin());
	copy(vec2.cbegin(),vec2.cend(),output); cout<<'\n';
	
	unique(vec2.begin(),vec2.end());
	copy(vec2.cbegin(),vec2.cend(),output);
	
	auto MinMax =minmax_element(vec1.cbegin(),vec1.cend());
	cout<<"\nthe Min: "<<*MinMax.first<<", the Max: "<<*MinMax.second;

}
