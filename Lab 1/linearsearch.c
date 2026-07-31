#include <stdio.h>
#include <limits.h>
int main(){
    int n; 
    printf("No.of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int element;
    printf("Element to search: ");
    scanf("%d", &element);

    for(int i = 0;i < n; i++){
        if(arr[i] == element){
            printf("%d found in position %d",element,i );
            return 0;
        }
    }
    printf("Element not found");
    return 0;
}