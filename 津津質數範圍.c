//�en�ӽ��
#include <stdio.h>
#include <math.h>   //�ϥΨ禡math.h�������ب禡sqrt()
int main()
{
    int range,counter=0,number=2,isPrime,i=2; //range�n�D���� counter����Ʀ��� //number�Q���� ZeroRemainder�㰣����
    printf("��X�en�ӽ��:n=");
    scanf("%d",&range);
    while(counter<range){   //�p�G����Ʀ���<�n�D����
        isPrime=1;  //���m
        for( i=2;i<=sqrt(number);i++){   //���Ʊq2~number�}�ڸ�(sqrt)
            if(number<=1){      //���>=2
                continue;
            }
            if(number%i==0){    //�p�G���㰣�N�������,isPrime=0 (false)
                isPrime=0;      
            }
        } 
        if(isPrime){    //1=true 0=false
            printf("��%d�ӽ�Ƭ�%d\n",counter+1,number);    
            counter++;  //���@��,counter+1;
        }
        number++;   //�U�@�ӳQ����
    }

    return 0;
}
