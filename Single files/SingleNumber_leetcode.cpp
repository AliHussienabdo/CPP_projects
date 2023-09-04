#include <vector> // vector class-template definition
#include <algorithm> // copy algorithm
#include <iostream> 
#include <cmath>
#include <string>
using namespace std;

bool judgeCircle(string moves) {
    int NumOF_U =0,NumOF_D=0,NumOF_L=0,NumOF_R=0;
	for(int i=0;i<moves.size();++i){
		if(moves[i] == 'U'){
		   NumOF_U++;	
		} 
		else if(moves[i] == 'D'){
		   NumOF_D++;	
		} 
		else if(moves[i] == 'L'){
		   NumOF_L++;	
		} 
		else if(moves[i] == 'R'){
		   NumOF_R++;	
		} 
	}   
	if(NumOF_R != NumOF_L || NumOF_U != NumOF_D){
		return false;
	} 
	return true;
}
int main(){
	cout<<judgeCircle("RRRLLLUD");
	
}
