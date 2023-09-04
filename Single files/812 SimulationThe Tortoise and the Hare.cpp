#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iomanip>
#include<windows.h>
using namespace std;

//use function moveTortoise  moveHare 

void moveHare(int* pos, int ran);
void moveTortoise(int* pos, int ran);
void showposition(const int* const, const int* const );

int main(){
	
	srand(static_cast<unsigned int>(time(0)));
	int har_pos=0;
	int tor_pos=0;
	int timer = 0;
	char press;

	cout << "To start press Any key : " << endl;
	std::cin >> press;;
	
	while(true){
		
		int ran=rand()%50 + 1;
		int ran2=rand()%50 + 1;
    	moveTortoise(&tor_pos,ran);
	    moveHare(&har_pos,ran2);
		
		system("cls");
	    showposition(&har_pos,&tor_pos);
		Sleep(300);
	
	    if((har_pos==tor_pos)>=70){
	    	cout<<"b";
		}
	    
		if(har_pos>=70){
			cout<<"the winner is the Hare"<<endl;
			cout<<"time by seconds = "<<timer;
			break;
		}
		else if(tor_pos>=70){
		    cout<<"the winner is the Tortoise "<<endl;
		    cout<<"time by seconds = "<<timer;
		    break;
		}
		++timer;
		
	}
	system("pause");
}

void moveTortoise(int* pos, int ran){
	
	if(1 <=ran&&ran <= 25){
		*pos+=3;
	}
	else if(26<=ran&&ran <=33 ){
		*pos-=6;
	}
	else if(34<=ran&&ran<=50){
		*pos+=1;
	}
	//if the animal loss steps less than 1 return it back to 1
	if(*pos<1){
	    *pos=1;
	}

}

void moveHare(int* pos, int ran){

	if(ran<=18&&ran>=1){
		*pos=*pos;
	}
	if(ran<=27&&ran>=19){
		*pos+=11;
	}
	else if(ran<=35&&ran>=28){
		*pos-=9;
	}
	else if(ran>=36&&ran<=45){
		*pos+=1;
	}
	else if(ran>=46&&ran<=50){
		*pos-=2;
	}
	//if the animal loss steps less than 1 return it back to 1
	if(*pos<1){
	   *pos=1;
	}
}

void showposition(const int* const har , const int* const tor){
	if(*har==*tor){
		cout<<setw(*har)<<"OUTH!!";
	}
	else if(*har<*tor){
		cout<<setw(*har)<<"H"
		    <<setw(*tor-*har)<<"T";  // we do this because we want them in the same line so 
		                             // we subtract the value of har from tor to put that value after "H" 
		                             // and put "T"
	}
	else {
		cout<<setw(*tor)<<"T";
		cout<<setw(*har-*tor)<<"H";
	}
	cout<<'\n';
}

