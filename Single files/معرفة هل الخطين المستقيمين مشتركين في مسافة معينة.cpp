/******************************************************************************* 
Only one line contains two intervals [l1,r1], [l2,r2] 
where (1=l1,l2,r1,r2=109), (l1=r1,l2=r2).
It's guaranteed that l1=r1 and l2=r2.
*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
  
    if(1<=l1,r1,l2,r2<=10000000000&&l1<=r1&&l2<=r2){
       
        if(r1>=l2&&r2>=l1){
            if(r1>r2&&(l2!=r1)){
                if(l2>l1){
                    cout<<l2<<" "<<r2;
                     return 0;
                }
                else if(l1>l2&&r2!=l2){
                    cout<<l1<<" "<<r2;
                     return 0;
                }
                else if(l1==l2){
                    cout<<l1<<" "<<r2;
                    return 0;
                }
                else {
                    cout<<"-1";
                }
            }
            if(r2>r1&&(l1!=r1)){
                if(l1>l2){
                    cout<<l1<<" "<<r1;
                     return 0;
                }
                else if(l2>l1){
                    cout<<l2<<" "<<r1;
                     return 0;
                }
                else if(l1==l2){
                    cout<<l1<<" "<<r1;
                    return 0;
                }
                else {
                    cout<<"-1";
                }
            }
            if(r1==r2){
                if(l1==l2){
                    cout<<l1<<" "<<r1;
                     return 0;
                }
                else if(l1>l2){
                    cout<<l1<<" "<<r1;
                     return 0;
                }
                else if(l2>l1){
                    cout<<l2<<" "<<r1;
                     return 0;
                }
                else {
                    cout<<"-1";
                }
            }
            if(l1==r1){
                if((r1==r2)||(l1==l2)||(r2>r1)){
                    cout<<r1<<" "<<r1;
                     return 0;
                }
                else {
                    cout<<"-1";
                }
            }
            if(l2==r2){
                if((r1==r2)||(l1==l2)||(r1>r2)){
                    cout<<r1<<" "<<r1;
                    return 0;
                }
                else {
                    cout<<"-1";
                }
            }
        }  
        else {
            cout<<"-1";
        }
    }
    return 0;
}



