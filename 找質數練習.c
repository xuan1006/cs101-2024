#include <stdio.h>
#include <math.h>

int main(){
	int i=0,num=0,count=0,k=2,totle=0;//i�O�P�w�Anum�O�ӼơAcount�O�p�ơAk�O�n�P�_���� 
	
	scanf("%d",&num);
	while(1){
		for(i=2;i<k;i++){
			if(k%i==0){
				count++;
			}
		}
		if(count==0){
			printf("%d\n",k);
			totle++;
		}
		if(totle==num){
			break;
		}
		k++;
		count=0;
	}
	
}
