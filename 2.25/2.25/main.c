
#include <stdio.h>
#include <stdlib.h>
//LCY
char l[5][5] = {
{ 'L', ' ', ' ', ' ', ' ' },
{ 'L', ' ', ' ', ' ', ' ' },
{ 'L', ' ', ' ', ' ', ' ' },
{ 'L', ' ', ' ', ' ', ' ' },
{ 'L', 'L', 'L', 'L', 'L' } };

char C[5][5] = {
{ ' ', 'C', 'C', 'C', 'C' },
{ 'C', ' ', ' ', ' ', ' ' },
{ 'C', ' ', ' ', ' ', ' ' },
{ 'C', ' ', ' ', ' ', ' ' },
{ ' ', 'C', 'C', 'C', 'C' } };

char Y[5][5] = {
{ 'Y', ' ', ' ', ' ', 'Y' },
{ ' ', 'Y', ' ', 'Y', ' ' },
{ ' ', ' ', 'Y', ' ', ' ' },
{ ' ', ' ', 'Y', ' ', ' ' },
{ ' ', ' ', 'Y', ' ', ' ' } };


int main() {
	system("pause");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c", l[i][j]);
		}
		printf("  ");
		for (int j = 0; j < 5; j++)
		{
			printf("%c", C[i][j]);
		}
		printf("  ");
		for (int j = 0; j < 5; j++)
		{
			printf("%c", Y[i][j]);
		}
		printf("\n");
	}
	return 0;
}