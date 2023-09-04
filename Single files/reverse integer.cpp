#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;



int reverse(int x) {
    int ans=0;
    while(x!=0){
        int digit=x%10;
        if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
            return 0;
        }
        ans=(ans*10)+digit;
        x=x/10;
    }
    return ans;
}


int main(){
	cout<<reverse(1201); // 321
}
