//Header Files
#include <stdio.h>

//Function Prototypes
void printPascalsTriangle(int);
int factorial(int);
int combination(int,int));

int factorial(int n)
{
	int f=1;
	while (n>=1)
	{
		 f=f*n;
		 n--;
	}
	return f;
}
int combination (int n,int r)
{
	return (factorial(n)/factorial(n-r)/factorial(r));
}

//Calculates and Prints a Pascal Triangle, taking an int as a parameter
void printPascalsTriangle(int line)
{
	int i,j,k,r;
	for(i=1;i<=line;i++)
	{
		k=1;
		r=0;
		for(j=1;j<=2*line-1;j++)
		{
			if(j>=line+1-i && j<=line-1+i &&k)
			{
				printf("%2d",combination(i-1,r));
				k=0;
				r++;
			}
			else
			{
				printf("  ");
				k=1;
			}
		}
		printf("\n");
	}
}
		int main()
		{
			int line;
			scanf("%d",&line);
			printPascalsTriangle(line);
			return 0;
		}
	
	
