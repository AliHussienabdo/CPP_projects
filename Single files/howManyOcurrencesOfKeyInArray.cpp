#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int howMany(vector<int>&v,int key){

    sort(v.begin(),v.end());

    int l = 0;
    int r = v.size()-1;
    int mid;
    int NumOfOccurences = 0;

    while(l<=r){
        mid = (l+r)/2;
        if(v[mid] == key){
            ++NumOfOccurences;
            int leftOcc = mid-1;
            int rightOcc = mid+1;
            while(leftOcc >= 0 && v[leftOcc--] == key){
                ++NumOfOccurences;
            }
            while(rightOcc < v.size() && v[rightOcc++] == key){
                ++NumOfOccurences;
            }
            break;

        }
        else if(key > v[mid]){
            l = mid+1;
        }
        else {
            r = mid-1;
        }
    }
    return NumOfOccurences;
}

int main(){
    vector<int>v{1,2,3,1,2,1,2,3,1,1,5};
    int val; cin>>val;
    cout << "The Number of ocurrences of key : " << val << " : " << howMany(v,val) << endl;
}