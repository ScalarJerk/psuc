#include<stdio.h>

int main(){
    int arr[100],size, num, i,max;
    printf("Enter number of elements\t");
    scanf("%d",&size);
    for (i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for (i=1;i<size;i++){
        if (arr[i]>max)
            max = arr[i];
    }
    printf("Largest %d",max);
    return 0;
}