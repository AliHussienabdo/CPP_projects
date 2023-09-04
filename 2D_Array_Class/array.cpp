#include <iostream>
#include "array.h"
using namespace std;

Array::Array(int r , int c)
    : row{(static_cast<size_t>(r))} , column{(static_cast<size_t>(c))} , ptr{new int[row * column]{}} 
	{
	}
	
Array::~Array(){
	delete [] ptr; // relase the space that have been taked to the 2d array
}

Array::Array(const Array& right)
     : row(right.row) , column(right.column) , ptr{new int [row*column]}
{
	for(size_t x=0;x<right.getsize();++x){
		ptr[x]=right.ptr[x];
	}
	
}

int Array:: getsize()const{
   return row*column;
}

bool Array::operator ==(const Array& right) const {
    if(this->getsize() != right.getsize()){
    	return false;
	}
	else {
		for(size_t x=0;x<right.getsize();++x){
			if(ptr[x] != right.ptr[x]){
				return false;
			}
		}
	}
	return true;
}

const Array& Array::operator = (const Array& right){// copy constructor
    if(this != &right){
    	
    	if(this->getsize() != right.getsize() ){
    		
    		delete [] ptr;
    		ptr = new int [right.getsize()];
		}
		
		for(size_t x=0;x<right.getsize();++x){
			ptr [x]= right.ptr[x];
		}
	}
	
	return *this;
}

int& Array::operator() (size_t r , size_t c)const{
	
	int* accptr = ptr; // I take the address of array ptr and put it to accptr
	if(r>=0&&c>=0){
	    accptr += column * r;	// move to the row by added main column * r(row) to accpter  
	    accptr += c;	       // add the column to accpter as address 
	}
	
	return *accptr;
} 


istream& operator>> (istream& input, Array& a){
	
	for(size_t n=0; n<(a.row*a.column);++n){
	    input>>a.ptr[n];
	}
	
	return input;
}

ostream& operator << (ostream& output, const Array& a){
	
	for(size_t n=0; n<a.row;++n){
		for(size_t i=0; i<a.column;++i){
			output<<"| "<<a(n,i)<<" |";
		}
	    output<<endl;
	}
	return output;
	
}
