//Task 1: Write a program the following, 
//the user is presented with a menu of grocery items and asked to enter an item number. 
#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>>MTRX{{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char player;
int Xscore = 0;
int Oscore = 0;
int NUMofGames = 4;

void PrintMatrix(){
	
	for(int i = 0; i< 3; ++i){
		cout << "\n+---+---+---+\n";
		cout << "| ";
		for(int j = 0; j < 3; ++j){
			cout << MTRX[i][j] << " | ";
		}
	}
	cout << "\n+---+---+---+\n";
}

bool isWin(){
	
	for(int i=0;i<3;i++){
		if(MTRX[i][0] == MTRX[i][1] &&  MTRX[i][1] == MTRX[i][2]){
	    	return true;
	    }
	    if(MTRX[0][i] == MTRX[1][i] && MTRX[1][i] == MTRX[2][i]){
	    	return true;
		}
	}
	
	if(MTRX[0][0] == MTRX[1][1] && MTRX[1][1] == MTRX[2][2]){
		return true;
	}
	else if(MTRX[0][2] == MTRX[1][1] && MTRX[1][1] == MTRX[2][0]){
		return true;
	}
	return false;
}

void Play(){
	
	cout << "Enter the coordenites of " << player << " :  " << endl;
    int x,y;
    while(cin >> x >> y){
    	if(x > 3 || y > 3){
    		cout << "out of range ... Try again.\n";
		}
		else if(MTRX[x-1][y-1]  == 'X' || MTRX[x-1][y-1] == 'O'){
			cout << "The cell: ( " << x << ", "<< y << " )filled Enter another.\n";
		}
		else {
			MTRX[x-1][y-1] = player;
			break;
		}
	}
    system("CLS");
                                                                      
    if(isWin()){
    	cout << "Player : "<< player << " is win \n";
    	NUMofGames--;
    	if(player == 'X') Xscore++;
    	else Oscore++;
    	MTRX  = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	}
	PrintMatrix();
}

bool Game_Over(){
	if(NUMofGames > 4 || abs(Xscore - Oscore) >= 2){
		return true;
	}
	return false;
}

int main(){

	while(!Game_Over()){
		PrintMatrix();
		player = 'X';
		Play();
		player = 'O';
		Play();
		system("CLS");
	}
	
	cout << "X : " << Xscore <<"  ,  O : "<< Oscore << endl;
	if(Xscore > Oscore ){
		cout << "X is win...";
	}
	else if(Oscore > Xscore){
		cout << "O is win...";
	}
	else {
		cout << "Draw in play...";
	}
}
