#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int p[15][60] = {0};

	//sq +0
	for (int i = 0;i < 9;i++)
	{
		p[i][0] = 1;
		p[i][8] = 1;
		p[0][i] = 1;
		p[8][i] = 1;
	}
	//se +10
	for (int i = 3;i < 6;i++) 
	{
		p[0][i + 10] = 1;
		p[8][i + 10] = 1;
	}
	p[1][10 + 2] = 1;
	p[1][10 + 6] = 1;
	p[7][10 + 2] = 1;
	p[7][10 + 6] = 1;
	for (int i = 0;i < 5;i++)
	{
		p[i+2][11] = 1;
		p[i+2][11+6] = 1;
	}
	//
	//ve +20
	p[0][20+2] = 1;
	for (int i = 0;i < 3;i ++) 
	{
		p[1][20 + i + 1] = 1;
	}
	for (int i = 0;i < 5;i++)
	{
		p[2][20+i] = 1;
	}
	for (int i = 0;i < 6;i++)
	{
		p[3+i][20+2] = 1;
	}
	//diamond shape +30
	//35 4
	for (int i = 0;i < 9;i++) {
		for (int j = 0;j < 9;j++)
		{
			p[i][30 + j] = (i == 0 && j == 4) || (i == 1 && (j == 3 || j == 5)) || (i == 2 && (j == 2 || j == 6)) || (i == 3 && (j == 1 || j == 7)) || (i == 4 && (j == 0 || j == 8)) || (i == 5 && (j == 1 || j == 7)) || (i == 6 && (j == 2 || j == 6)) || (i == 7 && (j == 3 || j == 5)) || (i == 8 && j == 4) ? 1 : p[4 + i][30 + j];
		}
	}
	//print
	for (int i = 0;i < 15;i++)
	{
		for (int j = 0;j < 60;j++)
		{
			p[i][j] == 1 ? printf("*") : printf(" ");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}