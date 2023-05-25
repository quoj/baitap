#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	int arr[5];
	int max,min,i;
	int total = 0;
	float avg;
	for(i=0; i<5; i++)
	{
		printf("Enter num %d", i+1);
		scanf("%d", &arr[i]);
		total += arr[i];
		avg = (float)total/i;
		if (i==0){
		max = arr[0]; 
		min = arr[0];
		}else{
			if(arr[i] > max )
		      max = arr[i];
		
		   if(arr[i] < min )
		    min = arr[i];
		}
		
       	
}
	
		
    printf("sum = %d", total);
	printf("max = %d", max);
	printf("min = %d", min);
	printf("avg = %f", avg);
	
}

