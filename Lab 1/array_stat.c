#include <stdio.h>
#include <limits.h>
int main(){
    int n; 
    printf("No.of elements: ");
    scanf("%d", &n);

    int arr[n];
    int maxi = INT_MIN ;
    int mini = INT_MAX;
    int sum = 0;
    for(int i = 0; i < n; i++){
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
        maxi = maxi < arr[i] ? arr[i] : maxi;
        mini = mini > arr[i] ? arr[i] : mini;
        sum += arr[i];
    }
    float avg = sum/n;
    
    printf("Largest element is %d.\n", maxi);
    printf("Smallest element is %d.\n", mini);
    printf("Average of all elements is %.2f.\n", avg);
   
    return 0; 
}