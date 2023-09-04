#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool Ispalindrome(string const& str);
void showresult(string const& str);

int main(){
    
    showresult("radar");
    showresult("able was I ere I saw elba");
    showresult("how to make the world");
}

bool Ispalindrome(string const& str){
    
    
    switch(str.size()){
        case 0: 
        case 1:
            return true;
        break;
        
        case 2:
            if(str[0]==str[1]){
                return true;
            }
            else {
                return false;
            }
        break;
        
        case 3: 
            if(str[0]==str[2]){
                return true;
            }
            else {
                return false;
            }
        break;
        
        default:
            if(str[0]==str[str.size()-1]){
                
                string other=str.substr(1,str.size()-2);
                return Ispalindrome(other);
            }
            else {
                return false;
            }
        break;
    }
    return false;
}

void showresult(string const& str){
    
    if(Ispalindrome(str)){
        cout<<str<<"  ::  true"<<endl;
    }
    else {
        cout<<str<<"  :: false "<<endl;
    }
}


