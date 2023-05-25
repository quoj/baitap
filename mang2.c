#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h> 
void main()
{
char alpha[26];
int i,j;
for(i=65,j=0; i<91; i++,j++)
{
	alpha[j] = i;
	printf("The character is %c \n", alpha[j]);
}
}

