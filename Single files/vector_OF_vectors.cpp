#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

  // loop to access each array element
  for (int step = 0; step < size; ++step) {
      
    // loop to compare array elements
    for (int i = 0; i < size - step; ++i) {

      // compare two adjacent elements
      // change > to < to sort in descending order
      if (array[i] > array[i + 1]) {

        // swapping elements if elements
        // are not in the intended order
        swap(array[i] , array[i + 1]);
      }
    }
  }
}

int main(){
//	vector<int*>vectorOfPointers(0);
//	int size = 3;
//	for(int i=0;i<size;++i){
//		// we push 3 arrays with 3 elements   
//		vectorOfPointers.push_back(new int [size]);
//	}
//	for(int i=0;i<size;++i){
//		for(int j=0;j<size;++j){
//			cin>>vectorOfPointers[i][j];
//		}
//	}
//	for(int i=0;i<size;++i){
//		cout<<"array number : "<<i+1<<endl;
//		for(int j=0;j<size;++j){
//			cout<<vectorOfPointers[i][j]<<" ";
//		}
//		cout<<endl;
//	}

    vector<vector<int>>vectorOfvectors(3);
    vector<int>vec1 {1,2,3};
    vector<int>vec2 {4,5,6};
    vector<int>vec3 {7,8,9};
    vectorOfvectors.push_back(vec1);
    vectorOfvectors.push_back(vec2);
    vectorOfvectors.push_back(vec3);
    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		cout<<vectorOfvectors[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
