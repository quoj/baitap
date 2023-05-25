#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	char ary[10];
	int i;
	printf("\n Enter string: ");
	scanf("%s",ary);
	printf("\n The string is %s \n\n",ary);
	
	
	for (i=0; i<5; i++)
	printf("\t&d", ary[i]);
}

