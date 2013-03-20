//Pasha Pourmand
//2013/03/20
//Pascal's Triangle

//Header Files
#include <stdio.h>
#include <string.h>

//Function Prototypes
void printPascalsTriangle(int sizeOfTriangle);

//Main
int main(){
	int userSize;

	//Prompts user for number and reads in
	printf("Enter in size for Pascal's Triangle: ");
	scanf("%d", &userSize);

	//Calls function to calculate and print Pascal's Triangle
	printPascalsTriangle(userSize);

	return 0;
}

//Calculates and Prints a Pascal Triangle, taking an int as a parameter
void printPascalsTriangle(int sizeOfTriangle){
	int pascalMatrix[sizeOfTriangle][sizeOfTriangle];
	int row, col;

	//Zeroes the 2d array
	memset(pascalMatrix, 0, sizeof(pascalMatrix));

	//Sets the first 2 rows
	pascalMatrix[0][0] = 1;
	pascalMatrix[1][0] = 1;
	pascalMatrix[1][1] = 1;

	//Fills in the other rows based on rules of Pascal
	for(row = 2; row < sizeOfTriangle; row++){
		pascalMatrix[row][0] = 1;
		for(col = 1; col <= row; col++){
			pascalMatrix[row][col] = pascalMatrix[row -1][col -1] + pascalMatrix[row - 1][col];
		}
	}

	//Prints to stdout
	for(row = 0; row < sizeOfTriangle; row++){
		for(col = 0; col <= row; col++){
			printf("%-10d ", pascalMatrix[row][col]);
		}
		printf("\n");
	}
}
