#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int arr[2][3];
	for( int row = 0; row<2; row++)
	for( int col = 0; col<3; col++)
	{
		printf("\nEnter number at[%d][%d]",row,col);
		scanf("%d", arr[row][col]);
	}
	for(int row = 0; row < 2; row++)
	for(int col = 0; col < 3; col++)
	printf("The number at[%d][%d] is %d",row,col,arr[row][col]);
	return 0;
}

