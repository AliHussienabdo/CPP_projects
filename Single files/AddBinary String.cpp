#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//string AddBinary(string& a,string& b){
//    string res {""}; 
//    int i = a.size()-1;  
//    int j = b.size()-1;
//    int carry = 0;
//	for( i;i<=0;i--,j--){// a>b in size
//	
//	    if(j==0&&i>0){
//	    	if(carry==0){
//	    		while(i--){
//	    			res+=a[i];
//				}
//				break;
//			}
//			else {
//				while(--i){
//					if(a[i]<carry){
//						res+="1";
//						carry=0;
//					}
//					else if(a[i]==carry){
//						res+="0";
//						carry=1;
//					}
//				}
//			}
//		}
//		if(j==0&&i==0 &&carry==1 ){
//			res+="1";
//			break;
//		}
//		if(a[i] == b[j] ){ // 1,1 & 0,0
//		    if(a[i] == '1' && carry == 1){
//				res+="1";
//			}
//			else {
//				res+="0";       //110111    100
//			    if(a[i]=='1'){   //11101
//				    carry = 1;   //10100
//			    }
//			}	
//		}
//		else{
//			if(carry == 1){
//				res+="0";
//			}
//			else {
//				res+="1";
//			    carry = 0;
//			}
//		}
//	}
//	return res;
//}   
//num = stoi(a[i]) + stoi(b[j]) + carry;
//if(num > 1){         111
//	res.append("0"); 110
//	carry = 1;
//}
//else {
//	res.append(itos(num));
//	carry = 0;
//}
string AddBinary(string a,string b){
	string res ="";
	int carry = 0;
	int num = 0;
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	
	for(int i=0;i<a.size();++i){
		string aa = {a[i]}; string bb {b[i]};
		num = stoi({a[i]}) + stoi({b[i]}) + carry;
		if(num > 1){
			res.append("0");
			carry = 1;
		}
		else {
			string ch;
			if(num == 0) ch ="0";
			if(num == 1) ch ="1";
			res.append(ch);
			carry = 0;
		}
	}
	
	return res;
}


int main(){
	string s1 = "123";
	string s2 = "000";
//	int x = stoi(s1[1]);
//	cout<<x;
	string a = AddBinary(s1,s2);
}
