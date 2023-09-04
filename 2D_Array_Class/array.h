#include <iostream>

#ifndef ARAAY_H
#define ARAAY_H

class Array{
	
	friend std::istream& operator>> (std::istream& , Array& );
	friend std::ostream& operator << (std::ostream& , const Array& );
	
	public:
		explicit Array(int =3,int=3);
		Array(const Array&); // copy constructor
		
		bool operator ==(const Array&)const; 
		bool operator !=(Array& right)const{
	       return !(*this == right);	
		}
		int getsize()const;
		const Array& operator =(const Array&);
		
		int& operator ()(size_t ,size_t)const;
		
		~Array();
	
	private:
		size_t row;
		size_t column;
		int * ptr;
};

#endif
