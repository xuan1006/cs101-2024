#include <stdio.h> 
#include <stdlib.h> 

// ��ư}�C�˧��x�s���X: �H������0~100�@10�ӼƦr�A�˧��x�s��C�L�X��
int main() {
    int i=0, nums[10];

    //�H������0~100�@10�ӼƦr
    printf("�H������0~100�@10�ӼƦr: ");
    for (i=0; i<10; i++) {
        nums[i] = rand()%101;
        printf("%d ", nums[i]);
    }
    printf("\n");

    //�˧��x�s
    for (i=0; i<10; i++) {
        nums2[total-i-1] = nums[i];
    }

    //�C�L
    printf("�˧ǿ�X: ");
    for (i=0; i<10; i++) {
        printf("%d ", nums2[i]);
    }


    return 0;
}

