#include <iostream>
#include <cmath>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	
    vector<int>vec(0);
    for(int x=0;x<nums1.size();++x){
    	
    	if(nums1[x] == nums1[x+1]) continue; 
        for(int i=0;i<nums2.size();++i){ 
            
            if(nums1[x] == nums2[i]){
            	if(find(vec.begin(), vec.end(), nums1[x]) != vec.end()){
            		break;
			    } 
			    else {
			    	vec.push_back(nums1[x]);
				}
                break;
            }
        }
    }
    return vec;
}

int main(){  //1,2,2,1      
	vector<int>v{4,9,5};
	vector<int>vv{9,4,9,8,4};
	v = intersection(vv,v);
	for(int c:v){
		cout<<c<<" ";
	}
}
