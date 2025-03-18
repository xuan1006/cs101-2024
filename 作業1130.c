#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

void main(){
	int scores[10]={0};
	int num=0,i=0;
	int sum=0;
	
	for(i=0;i<10;i++){
		printf("輸入第%d個數",i+1);
		scanf("%d",&scores[i]);
	}
	for(i=0;i<10;i++){
		sum+=scores[i];
	}
	sum=sum/10;
	printf("平均%d",sum);
	
	for(i=0;i<10;i++){
		num+=pow(scores[i]-sum,2);
	}
	num=(int)sqrt(num/10);
	print("標準差:%d",num); 
} 
