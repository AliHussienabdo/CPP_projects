#include <iostream>
using namespace std;

int main(){
	const int size=10;
	double numbers[size]={0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9};
	
	double *nptr= numbers;
	//double *nptr=&numbers[0];
	for(int x=0;x<size;x++){
	    cout<<numbers+x<<endl;
	    //this well be the output 
	    // the difference between any value is 8 because it's the 
	    // numbers of bytes that doubles takes , if we use int the 
	    // difference will be 4 bytes 
	    //0x7ffe24d0bbd0
        //0x7ffe24d0bbd8
        //0x7ffe24d0bbe0
        //0x7ffe24d0bbe8
        //0x7ffe24d0bbf0
        //0x7ffe24d0bbf8
        //0x7ffe24d0bc00
        //0x7ffe24d0bc08
        //0x7ffe24d0bc10
        //0x7ffe24d0bc18
	}
	cout<<"Array subscript notation\n";
	for(size_t x=0;x<size;x++){
		cout<<numbers[x]<<endl;
	}
	cout<<"Pointer/offset notation where the pointer is the array name\n";
	for(size_t x=0;x<size;++x){
	    cout<<*(numbers+x)<<endl;
	}
	cout<<"Pointer subscript notaion\n";
	for(size_t x=0;x<size;++x){
	    cout<<nptr[x]<<endl;
	}
	cout<<"Pointer/offset notation where \n";
	for(size_t x=0;x<size;++x){
	    cout<<*(nptr+x)<<endl;
	}
	cout<<"the forth usig Pointer sub = "<<nptr[3]<<endl;
	cout<<"the forth using Pointer subset = "<<*(nptr+3)<<endl;
	cout<<"the forth using array sub = "<<numbers[3]<<endl;
	cout<<"the forth pointer/offset wh the pointer is the array name = "<<*(numbers+3)<<endl;
}
