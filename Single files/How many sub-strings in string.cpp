#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//// function to print the array
//void printArray(int array[], int size) ;
//
//// function to rearrange array (find the partition point)
//int partition(int arr[], int low, int high) {
//	
//	int i = low;
//	int j= high;
//	int pivLoc = i ;
//	while(true){
//		while(arr[pivLoc] <= arr[j] && pivLoc != j ){
//			--j;
//		}
//		if(pivLoc == j){
//			break;
//		}
//		else if (arr[pivLoc] > arr[j]) {
//			swap(arr[pivLoc] , arr[j]);
//			pivLoc = j;
//		}
//		while(arr[pivLoc] >= arr[i] && pivLoc != i){
//			++i;
//		}
//		if(pivLoc == i ){
//			break;
//		}
//		else if(arr[pivLoc] < arr[i]){
//			swap(arr[pivLoc] , arr[i] );
//			pivLoc = i;
//		}
//
//	}
//	return pivLoc;
//}
//
//void quickSort(int array[], int low, int high) {
//  if (low < high) {
//      
//    // find the pivot element such that
//    // elements smaller than pivot are on left of pivot
//    // elements greater than pivot are on righ of pivot
//    int pi = partition(array, low, high);
//
//    // recursive call on the left of pivot
//    quickSort(array, low, pi - 1);
//
//    // recursive call on the right of pivot
//    quickSort(array, pi + 1, high);
//  }
//}
//
//  
//   bool IsPalindromic(string s){
//        int i = 1;
//        bool palid = true;
//        for(int x=0;x<s.size();++x){
//            if(s[0] != s[s.size()-i]){
//                palid = false;
//                break;
//            }
//            ++i;
//        }
//        if(palid){
//            return true;
//        }
//        return false;
//    }
//    int countSubstrings(string s) {
//        int total = s.size();
//        if(total == 1){
//            return total;
//        }
//        else {
//            for(int x=0;x<s.size();++x){
//                if(IsPalindromic(s)){
//                    ++total;
//                }
//                s =s.substr(x+1, s.size()-1);
//            }
//        }
//        return total;
//        
//    }
//    

int com(int x,int y){
	
	return x>y && y==0;
}
    
int main(){
	string s = "aaa";
	vector<int>a;
	a.push_back(0);
	a.push_back(2);
	a.push_back(1);
	a.push_back(9);
	a.push_back(0);
	a.push_back(8);
	a.push_back(23);
	a.push_back(21);
	sort(a.end(),a.begin(),com);
	for(int x=0;x<a.size();++x){
		cout<<a[x]<<" ";
	}
	
}
