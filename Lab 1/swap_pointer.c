#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp; 
}

int main(){
    int a ;
    int b ;
    printf("Enter element A : ");
    scanf("%d", &a);
    printf("Enter element B : ");
    scanf("%d", &b);

    printf("Before Swap :- \n");
    printf("Element A is %d AND Element B is %d\n", a,b);

    swap(&a, &b);

    printf("After Swap :- \n");
    printf("Element A is %d AND Element B is %d", a, b);
    
    return 0;
}