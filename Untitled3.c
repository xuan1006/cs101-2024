#include <stdio.h> 
#include <stdlib.h> 

// 整數陣列倒序儲存後輸出: 隨機產生0~100共10個數字，倒序儲存後列印出來
int main() {
    int i=0, nums[10];

    //隨機產生0~100共10個數字
    printf("隨機產生0~100共10個數字: ");
    for (i=0; i<10; i++) {
        nums[i] = rand()%101;
        printf("%d ", nums[i]);
    }
    printf("\n");

    //倒序儲存
    for (i=0; i<10; i++) {
        nums2[total-i-1] = nums[i];
    }

    //列印
    printf("倒序輸出: ");
    for (i=0; i<10; i++) {
        printf("%d ", nums2[i]);
    }


    return 0;
}

