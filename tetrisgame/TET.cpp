#include "TET.h"

void Tetromino::printShape( tetromino shape,vector<vector<char>>X ) {		//print shapes on the screen 
cout<<"\n";
	for(auto row: X){
		for(auto elem: row){
		cout<<elem<<"";
		}
		cout<<endl;
	}

}


void Tetromino::startGame() {					//start game
	char shape;
	int name; //name of shape 
cout << "How many tetrominos?\n";		//ask to user 
cin>>numberTetro;
cout << "What are the types?\n";
  for (int i=0;i<numberTetro;++i){
  cin>>shape;
  shapeTetromino.push_back(shape); 		//keep shape a vector
  }
  cout << "Your Tetrominos..";
  for (int i=0;i<numberTetro;i++){

     switch(shapeTetromino[i]){			//print vector shape of user want  one by one
    		case 'I':
 			printShape(shapeI,matrixI);
    			break;
			case 'O':
				 printShape(shapeO,matrixO);
    			break;
			case 'T':
				 printShape(shapeT,matrixT);
    			break;    
			case 'J':
				 printShape(shapeJ,matrixJ);
    			break;
			case 'L':
				printShape(shapeL,matrixL);
			break;
			case 'S':
				printShape(shapeS,matrixS);
    			break;
			case 'Z':
				 printShape(shapeZ,matrixZ);
    			break;	
    		default:
    			break;
			    		
		}
     
	}
}
void Tetromino::rotate(){
int count=0;	
char shape;	//vector of shapes

for (int i=0;i<numberTetro;++i){
	
		if(shapeTetromino[i]=='Z' || shapeTetromino[i]=='S'){
			if(shapeTetromino[i]=='Z'){
							//fill third row of game are
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');			 
			gameArea2.push_back(' ');		//fill second row of game are
			gameArea2.push_back('Z');  
			gameArea2.push_back('Z');
			 
			gameArea.push_back('Z');
			gameArea.push_back('Z');	 
			 
			}else if(shapeTetromino[i]=='S'){  // direct put s not rotate
		 
			gameArea3.push_back(' '); 
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back(' ');  
			gameArea2.push_back('S');  
			gameArea2.push_back('S');
			gameArea.push_back('S');  
			gameArea.push_back('S');
			 
			}
			
			if(shapeTetromino[i+1]=='T'){
			gameArea3.push_back(' ');
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back(' ');   
			gameArea2.push_back('T');  
			gameArea2.push_back(' ');
			gameArea.push_back('T');  
			gameArea.push_back('T');
			gameArea.push_back('T');
				i++;	  
				 
			}else if(shapeTetromino[i+1]=='Z'){
			i++;
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			 		 
			gameArea2.push_back('Z');		//fill second row of game are
			gameArea2.push_back('Z');  
			gameArea2.push_back(' ');
			gameArea.push_back(' ');
			gameArea.push_back(' ');
			gameArea.push_back('Z');
			gameArea.push_back('Z');
			 
			}else if(shapeTetromino[i+1]=='L'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back('L');
			gameArea2.push_back(' '); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back('L');
			 
			gameArea.push_back('L');
			gameArea.push_back('L');
			 
			 
			}else if(shapeTetromino[i+1]=='I'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back(' '); //2 floor
		
			gameArea2.push_back(' ');
			 
			gameArea.push_back('I'); //I ROTATE  LEFT 
			gameArea.push_back('I');
			gameArea.push_back('I');  
			 
			}else if(shapeTetromino[i+1]=='S'){
			i++;
			gameArea3.push_back('S');//3 floor
			gameArea3.push_back(' ');  	 //2 floor
			gameArea2.push_back('S');  
			gameArea2.push_back('S');
			gameArea.push_back(' ');  
			gameArea.push_back('S');
			 
			}else if(shapeTetromino[i+1]=='O'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('O'); //2 floor
			gameArea2.push_back('O');  
			gameArea2.push_back(' ');
			gameArea.push_back('O'); 
			gameArea.push_back('O');
			 
			}else if(shapeTetromino[i+1]=='J'){
			i++;
			gameArea3.push_back(' ');//3 floor
			 
			gameArea3.push_back('J');
			gameArea2.push_back(' '); //2 floor
			 
			gameArea2.push_back('J');
			gameArea.push_back('J');  
			gameArea.push_back('J');
			 	
			}
		}else if(shapeTetromino[i]=='I'){
			 
			gameArea3.push_back(' ');	//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back(' '); 	//2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');  
			gameArea.push_back('I'); 	// ROTATE  LEFT 
			gameArea.push_back('I');
			gameArea.push_back('I');  
			 
			
			
			if(shapeTetromino[i+1]=='Z'){
				i++;	 
				gameArea2.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' '); 
			gameArea3.push_back(' ');
			gameArea2.push_back('Z'); //2 floor
			gameArea2.push_back('Z');  
			gameArea2.push_back(' ');
			gameArea.push_back('Z');  
			gameArea.push_back('Z');
					
			}else if(shapeTetromino[i+1]=='L'){
			i++;
			shape=shapeTetromino[i];
			gameArea3.push_back('L');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('L'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('L');  
			gameArea.push_back('L');
		 
			}else if(shapeTetromino[i+1]=='I'){
			i++;
			shape=shapeTetromino[i];
			gameArea3.push_back('I');  
			gameArea3.push_back(' ');
			gameArea3.push_back(' ');  
			gameArea2.push_back('I'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('I');
			 
			}else if(shapeTetromino[i+1]=='S'){
			i++;
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea3.push_back('S');  
			gameArea2.push_back('S'); //2 floor
			gameArea2.push_back('S');  
			gameArea2.push_back(' ');
			gameArea.push_back('S'); 
			 
			}else if(shapeTetromino[i+1]=='T'){
			i++;
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea3.push_back(' ');  
			gameArea2.push_back(' '); //2 floor
			gameArea2.push_back('T');  
			gameArea2.push_back(' ');
			gameArea.push_back('T'); 
			gameArea.push_back('T'); 
			gameArea.push_back('T'); 
		 
			}
			else if(shapeTetromino[i+1]=='O'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('O'); //2 floor
			gameArea2.push_back('O');  
			gameArea2.push_back(' ');
			gameArea.push_back('O'); 
			gameArea.push_back('O');
		 
			}else if(shapeTetromino[i+1]=='J'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('J'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('J');  
			gameArea.push_back('J');
			gameArea.push_back('J');
				
			}
		}else if(shapeTetromino[i]=='O'){
			shape=shapeTetromino[i];
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('O'); //2 floor
			gameArea2.push_back('O');  
			gameArea2.push_back(' ');
			gameArea.push_back('O'); 
			gameArea.push_back('O');
			 
			if(shapeTetromino[i+1]=='Z'){
				i++;	 
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back('Z');  
			gameArea3.push_back(' ');			 
			gameArea2.push_back('Z');//2 floor
			gameArea2.push_back('Z');  
			gameArea2.push_back(' ');
			gameArea.push_back('Z');	
			}else if(shapeTetromino[i+1]=='L'){
			i++;
			shape=shapeTetromino[i];
			gameArea3.push_back('L');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('L'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('L');  
			gameArea.push_back('L');
			 
			}else if(shapeTetromino[i+1]=='I'){
			i++;
			shape=shapeTetromino[i];
			gameArea3.push_back('I');  
			gameArea3.push_back(' ');
			gameArea3.push_back(' ');  
			gameArea2.push_back('I'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('I');
		 	
			}else if(shapeTetromino[i+1]=='S'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back(' '); //2 floor
			gameArea2.push_back('S');  
			gameArea2.push_back('S');
			gameArea.push_back('S');  
			gameArea.push_back('S');
		 
			}else if(shapeTetromino[i+1]=='O'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('O'); //2 floor
			gameArea2.push_back('O');  
			gameArea2.push_back(' ');
			gameArea.push_back('O'); 
			gameArea.push_back('O');
			 	
			}else if(shapeTetromino[i+1]=='J'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('J'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('J');  
			gameArea.push_back('J');
			gameArea.push_back('J');
			 	
			}
		}else if(shapeTetromino[i]=='J'){	//rotate j 
			shape=shapeTetromino[i];
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('J'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('J');  
			gameArea.push_back('J');
			gameArea.push_back('J');
		 
			
			if(shapeTetromino[i+1]=='Z'){
				i++;	 
			gameArea3.push_back(' ');
			gameArea3.push_back(' ');   
			gameArea3.push_back(' ');
			gameArea2.push_back('Z'); //2 floor
			gameArea2.push_back('Z');  
			gameArea2.push_back(' ');
			gameArea.push_back('Z');  
			gameArea.push_back('Z');
				 
			}else if(shapeTetromino[i+1]=='L'){
			i++;
			shape=shapeTetromino[i];
			gameArea3.push_back('L');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('L'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('L');  
			gameArea.push_back('L');
	 	
			}else if(shapeTetromino[i+1]=='I'){
			i++;
			shape=shapeTetromino[i];
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea3.push_back(' ');  
			gameArea2.push_back(' '); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('I');
			gameArea.push_back('I');
			gameArea.push_back('I');
		 	
			}else if(shapeTetromino[i+1]=='S'){
			i++;
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea3.push_back('S');  
			gameArea2.push_back('S'); //2 floor
			gameArea2.push_back('S');  
			gameArea2.push_back(' ');
			gameArea.push_back('S'); 
		 
			}else if(shapeTetromino[i+1]=='O'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('O'); //2 floor
			gameArea2.push_back('O');  
			gameArea2.push_back(' ');
			gameArea.push_back('O'); 
			gameArea.push_back('O');
			 
			}else if(shapeTetromino[i+1]=='J'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('J'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('J');  
			gameArea.push_back('J');
			gameArea.push_back('J');
			}
		}else if(shapeTetromino[i]=='L'){
			shape=shapeTetromino[i];
			 gameArea3.push_back('L');//3 floor
			 
			gameArea3.push_back(' ');
			gameArea2.push_back('L'); //2 floor
			 
			gameArea2.push_back(' ');
			gameArea.push_back('L');  
			gameArea.push_back('L');
			if(shapeTetromino[i+1]=='Z'){
				i++;	 
			gameArea3.push_back(' ');
			gameArea3.push_back(' ');   
			gameArea3.push_back(' ');
			gameArea2.push_back('Z'); //2 floor
			gameArea2.push_back('Z');  
			gameArea2.push_back(' ');
			gameArea.push_back('Z');  
			gameArea.push_back('Z');
				 
			}else if(shapeTetromino[i+1]=='L'){
			i++;
			shape=shapeTetromino[i];
			gameArea3.push_back('L');//3 floor
			gameArea3.push_back(' ');  
			gameArea2.push_back('L'); //2 floor
			gameArea2.push_back(' ');  
			gameArea.push_back('L');  
			gameArea.push_back('L');
			 
			}else if(shapeTetromino[i+1]=='I'){
			i++;
			shape=shapeTetromino[i];
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back(' '); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('I'); //I ROTATE  LEFT  
			gameArea.push_back('I');
			gameArea.push_back('I');  
			 
			}else if(shapeTetromino[i+1]=='S'){
			i++;
			gameArea3.push_back(' ');  
			gameArea3.push_back('S');
			 
			gameArea2.push_back('S'); //2 floor
			gameArea2.push_back('S');     
			gameArea.push_back('S');     
			}else if(shapeTetromino[i+1]=='O'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('O'); //2 floor
			gameArea2.push_back('O');  
			gameArea2.push_back(' ');
			gameArea.push_back('O'); 
			gameArea.push_back('O');
			 
			}else if(shapeTetromino[i+1]=='J'){
			i++;
			gameArea3.push_back('J');  
			gameArea3.push_back(' ');
			gameArea2.push_back('J');  
			gameArea.push_back('J');
			gameArea.push_back('J');
			 	
			}else if(shapeTetromino[i+1]=='T'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('T');  
			gameArea2.push_back(' ');
			gameArea.push_back('T'); //T ROTATE TWO TİMES LEFT  
			gameArea.push_back('T');
			gameArea.push_back('T');
			}
		}else if(shapeTetromino[i]=='T'){
			shape=shapeTetromino[i];
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back(' '); //2 floor
			gameArea2.push_back('T');  
			gameArea2.push_back(' ');
			gameArea.push_back('T'); //T ROTATE TWO TİMES LEFT  
			gameArea.push_back('T');
			gameArea.push_back('T');
				 
			
			if(shapeTetromino[i+1]=='Z'){
				i++;	 
				gameArea3.push_back(' ');
			gameArea3.push_back(' ');   
			gameArea3.push_back(' ');
			gameArea2.push_back('Z'); //2 floor
			gameArea2.push_back('Z');  
			gameArea2.push_back(' ');
			gameArea.push_back('Z');  
			gameArea.push_back('Z');
			}else if(shapeTetromino[i+1]=='L'){
			i++;
			shape=shapeTetromino[i];
			 gameArea3.push_back('L');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('L'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('L');  
			gameArea.push_back('L');
			}else if(shapeTetromino[i+1]=='I'){
			i++;
			shape=shapeTetromino[i];
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back(' '); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('I'); //I ROTATE  LEFT 
			gameArea.push_back('I');
			gameArea.push_back('I');  
		 
			}else if(shapeTetromino[i+1]=='S'){
			i++;
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea3.push_back('S');  
			gameArea2.push_back('S'); //2 floor
			gameArea2.push_back('S');  
			gameArea2.push_back(' ');
			gameArea.push_back('S');  
		 
			}else if(shapeTetromino[i+1]=='O'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('O'); //2 floor
			gameArea2.push_back('O');  
			gameArea2.push_back(' ');
			gameArea.push_back('O'); 
			gameArea.push_back('O');
			 
			}else if(shapeTetromino[i+1]=='J'){
			i++;
			gameArea3.push_back(' ');//3 floor
			gameArea3.push_back(' ');  
			gameArea3.push_back(' ');
			gameArea2.push_back('J'); //2 floor
			gameArea2.push_back(' ');  
			gameArea2.push_back(' ');
			gameArea.push_back('J');  
			gameArea.push_back('J');
			gameArea.push_back('J');
			}
		}
		 
			
	}
		print(gameArea3);		//print screen third line
		print(gameArea2);		//print screen second line
		print(gameArea);		//print screen first line
	 
}

bool Tetromino::canFit(){			//if have a blank it is not fit 
	for (char x : gameArea) {
        if(gameArea[x]==' '){
        	return false;
}
    }cout<<"\n";
     return true;
}

void Tetromino::print(vector<char>gameArea) {		//print screen lines
//cout<<"\n\nYour Tetrominos..\n\n";
 
  	for (char x : gameArea) {
        std::cout << x <<"";
    }cout<<"\n";
  		
}

