#include <iostream>
#include <vector>
using namespace std;

int binary_search (vector<int>& nums, int target){
	int mid;
	int first=0;
	int last=nums.size()-1;
	
	while(first<=last){
		
		mid=(first + last) / 2;
		
		if (target==nums[mid]){
			return mid;
		}
		else if(target>nums[mid]){
			first=mid+1;  // adding 1 here , because we didn't need to search about mid'value in this case becaue it's not
		}                // num != arr[mid] in the above if statment , so we didn't need this value
		else {
			last=mid-1;
		}
	}
	return mid;
}

int searchInsert(vector<int>& nums, int target) {
    
    if(target <nums[0]){
        return 0;
    }
    else if(target > nums[nums.size()-1]){
        return nums.size();
    }
    binary_search(nums , target);
}

int main(){
	vector<int>n={1,3,7,9};
	int target = 7;
	cout<<searchInsert(n,target);
	cin.get();
}
