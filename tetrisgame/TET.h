#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#ifndef TET_H
#define TET_H

using namespace std;

class Tetromino{
	
	public:
		
	enum tetromino{
	shapeI,shapeO,shapeT,shapeJ,shapeL,shapeS,shapeZ
	};
		tetromino tets;
		vector<char> shapeTetromino;		//Keep shape of  user want
		vector<char>gameArea;			//keep first row
		vector<char>gameArea2;			//keep second row
		vector<char>gameArea3;			//keep third row
		
		vector<vector<char>>matrixI{
		{'I',' ',' '},
		{'I',' ',' '},
		{'I',' ',' '}
		};
		
		vector<vector<char>>matrixO{
		{' ',' ',' '},
		{'O','O',' '},
		{'O','O',' '}
		};
		vector<vector<char>>matrixT{
		{'T','T','T'},
		{' ','T',' '},
		{' ','T',' '}
		};
		vector<vector<char>>matrixJ{ 	
		{' ','J',' '},
		{' ','J',' '},
		{'J','J',' '}
		};
		vector<vector<char>>matrixL{
		{'L',' ',' '},
		{'L',' ',' '},
		{'L','L',' '}
		};
		vector<vector<char>>matrixS{
		{' ',' ',' '},
		{' ','S','S'},
		{'S','S',' '}
		};
		vector<vector<char>>matrixZ{
		{' ',' ',' '},
		{'Z','Z',' '},
		{' ','Z','Z'}
		};
		
		 
		int numberTetro;
		void startGame(); 
		void rotate(); // will take parameter to rotate the tetromino (left and right)
		void print(vector<char>gameArea); 		// will print the current tetromino on the screen
 		bool canFit(); 	// function will take another tetromino and the relative position of the other tetromino.
		void takeShape();
		
		void printShape( tetromino,vector<vector<char>>X  );	//print shapes on the terminal 
};


#endif
