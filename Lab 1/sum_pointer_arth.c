#include <stdio.h>

int main(){
    int n; 
    printf("No.of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    int sum = 0;

    for(int i = 0; i < n; i++){
        sum += *(ptr+i);
    }
    printf("Sum of all the elements are : %d", sum);

    return 0;
}