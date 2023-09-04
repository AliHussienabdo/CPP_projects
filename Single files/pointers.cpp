#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
	vector<int> values{1, 2, 3, 4, 5, 6};
	ostream_iterator<int>output{cout,", "};
	copy(values.cbegin(),values.cend(),output);
}
