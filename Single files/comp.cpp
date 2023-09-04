#include <iostream>
#include <string>
#include "comp.h"
#include  <cmath>
using namespace std;

Quadratic::Quadratic(){
	a=1;
	b=0;
	c=0;
	cout<<a<<" "<<b<<" "<<c<<endl;
}
Quadratic::Quadratic(double aa,double bb,double cc)
	:a(aa) , b(bb) , c(cc)
	{
	    if(aa==0){
	        a=1;
	    }
	    cout<<a<<" "<<b<<" "<<c<<endl;
	}
	 

Quadratic & Quadratic::add(Quadratic one){
	this->a+=one.a;
	this->b+=one.b;
	this->c+=one.c;
	return *this;
}

Quadratic & Quadratic::sub(Quadratic one){
	this->a-=one.a;
	this->b-=one.b;
	this->c-=one.c;
	return *this;
}

void Quadratic::solve() const{
	double x1,x2;
	double root=sqrt((b*b)-(4*a*c));
	x1=((-1*b)-root)/(2*a);
	x2=((-1*b)+root)/(2*a);
	if(root==0){
		cout<<"No Real Roots.'cause the root = 0 \n";
	}
	else {
	    cout<<"the solutions of the equations is \n";
	    cout<<"x1= "<<x1<<endl;
	    cout<<"x2= "<<x2<<endl;
	}
}

void Quadratic::print() const {
	cout<<a<<" "<< b <<" "<<c<<endl;
}

Quadratic::~Quadratic(){
	cout<<"the constructor has been destoryed where a = "<<a<<endl;
}
