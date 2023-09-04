#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a,b,c,d;
    long long num=pow(10,18);
    long long num2=10000000000;
    cin>>a>>b>>c>>d;
    //(num2>=a)&&(a>=(-1*num2))&&(num2>=b)&&(b>=(-1*num2))&&(num2>=c)&&(c>=(-1*num2))
    
    if((a,b,c<=num2)&&(a,b,c>=(-num2))&&(d<=num)&&(d>=(-num))){
    	
        if((a+(b-c)==d)||(a+(b*c)==d)||((a*b)+c==d)||((a*b)-c==d)||((a-b)+c==d)||(a-(b*c)==d)){
        	
            cout<<"YES";
        }
        else {
        	
            cout<<"NO";
        }
    }
}


