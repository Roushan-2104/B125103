<<<<<<< HEAD
#include <stdio.h>
#include <limits.h>
int main(){
    int n; 
    printf("No.of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n* sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Elements are : ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;

=======
#include <stdio.h>
#include <limits.h>
int main(){
    int n; 
    printf("No.of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n* sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed!");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Elements are : ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;

>>>>>>> a200c81b376025dfb3e26b512bed25d8988af8d6
}