#include "TET.h"

int main(){
	bool result;  
	Tetromino tetro;
	tetro.startGame();
	tetro.rotate();
	result=tetro.canFit();
	if(result==true){
	cout<<"your horizantally best fit";
	}
}
