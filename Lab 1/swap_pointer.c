<<<<<<< HEAD
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
=======
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
>>>>>>> a200c81b376025dfb3e26b512bed25d8988af8d6
}