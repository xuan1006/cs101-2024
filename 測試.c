#include <stdio.h>

int main(){
	int i=0,k=0;
	char str[80]={};
	
	while(1){
		printf("¿é¤J:");
		scanf("%s",str);
		if(str[0]=='Z'){
			break;
		}
		
		while(str[i]!='\0'){
			if(str[i]>=65 && str[i]<=90){
            	str[i]+=32;
			}
			else if(str[i]>=97 && str[i]<=122){
            	str[i]-=32;
			}
        	i++;
		}
	}
		print("%s\n",str);
		i=0; 
	 
	return 0;]]]
}
