#include <iostream>
using namespace std;
//1.If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
//2.If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
//3.If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
//4.The year is a leap year (it has 366 days).
//5.The year is not a leap year (it has 365 days).
int main(){
	
	int year;	
	cin>>year;
	
	if(year%4==0){
		
		if(year%100==0){
			
			if(year%400==0){
				cout<<"the year is a leap year"<<endl;
			}
			else {
				cout<<"the year is not leap"<<endl;
			}
		}
		else {
			cout<<"the year is leap"<<endl;
		}
	}
	else {
		cout<<"the year is not a leap year"<<endl;
	}
}
