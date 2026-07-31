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
    printf("Array in reverse order: ");
    for(int i = n-1; i >=0 ; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}