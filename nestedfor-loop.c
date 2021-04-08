#include<stdio.h>

int main()
{
	int numbers[2][2] = {
	                    {0,10},
	                    {1,3}
						};
						int i;
						int j;
						for (i = 0; i < 2; i++)
						{
							for (j = 0; j< 2; j++){
								printf("%d,", numbers[i][j]);
							}
							printf("\n");
						}
}
