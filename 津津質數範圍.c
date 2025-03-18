//前n個質數
#include <stdio.h>
#include <math.h>   //使用函式math.h中的內建函式sqrt()
int main()
{
    int range,counter=0,number=2,isPrime,i=2; //range要求次數 counter找到質數次數 //number被除數 ZeroRemainder整除次數
    printf("輸出前n個質數:n=");
    scanf("%d",&range);
    while(counter<range){   //如果找到質數次數<要求次數
        isPrime=1;  //重置
        for( i=2;i<=sqrt(number);i++){   //除數從2~number開根號(sqrt)
            if(number<=1){      //質數>=2
                continue;
            }
            if(number%i==0){    //如果有整除就不為質數,isPrime=0 (false)
                isPrime=0;      
            }
        } 
        if(isPrime){    //1=true 0=false
            printf("第%d個質數為%d\n",counter+1,number);    
            counter++;  //找到一次,counter+1;
        }
        number++;   //下一個被除數
    }

    return 0;
}
